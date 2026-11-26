using System.Collections;
using UnityEngine;

public class EnemigoControler : MonoBehaviour
{
    [SerializeField] private GameObject prefabExplosion;
    [SerializeField] private AudioClip sonidoImpacto;
    [Range(0f, 1f)][SerializeField] private float volumenSonido = 0.8f;

    private bool destruyendo = false;

    void Update()
    {
        if (transform.localPosition.y < -2f)
        {
            Destroy(gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (destruyendo) return;

        // Si toca el suelo
        if (collision.gameObject.CompareTag("Suelo"))
        {
            if (gameObject.CompareTag("Enemigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloEnemigo();
            }
            else if (gameObject.CompareTag("Amigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloAmigo();
            }
            Destroy(gameObject);
        }
        // Si le da un proyectil en el aire
        else if (collision.gameObject.CompareTag("Proyectil"))
        {
            destruyendo = true;
            Destroy(collision.gameObject); // Destruye el proyectil al instante

            if (gameObject.CompareTag("Enemigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloAmigo();
            }
            else if (gameObject.CompareTag("Amigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloEnemigo();
            }

            StartCoroutine(AnimarYExplotar());
        }
    }

    private IEnumerator AnimarYExplotar()
    {
        // Congela su caída y desactiva colisiones mientras hace la animación previa
        Rigidbody rb = GetComponent<Rigidbody>();
        if (rb != null) rb.isKinematic = true;

        Collider col = GetComponent<Collider>();
        if (col != null) col.enabled = false;

        Vector3 escalaInicial = transform.localScale;
        float duracion = 0.25f;
        float tiempo = 0f;

        // Animación procedural: se expande y gira rápido durante 0.25s antes de explotar
        while (tiempo < duracion)
        {
            tiempo += Time.deltaTime;
            float progreso = tiempo / duracion;
            transform.localScale = Vector3.Lerp(escalaInicial, escalaInicial * 1.6f, progreso);
            transform.Rotate(Vector3.up * 720f * Time.deltaTime);
            yield return null;
        }

        if (prefabExplosion != null)
        {
            Instantiate(prefabExplosion, transform.position, Quaternion.identity);
        }

        if (sonidoImpacto != null)
        {
            AudioSource.PlayClipAtPoint(sonidoImpacto, transform.position, volumenSonido);
        }

        Destroy(gameObject);
    }
}