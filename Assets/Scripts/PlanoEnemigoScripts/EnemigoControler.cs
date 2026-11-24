using UnityEngine;

public class EnemigoControler : MonoBehaviour
{
    [SerializeField] private GameObject prefabExplosion;
    [SerializeField] private AudioClip sonidoImpacto;
    [Range(0f, 1f)][SerializeField] private float volumenSonido = 0.8f;

    void Update()
    {
        if (transform.localPosition.y < -2f)
        {
            Destroy(gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
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
            if (gameObject.CompareTag("Enemigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloAmigo();
            }
            else if (gameObject.CompareTag("Amigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloEnemigo();
            }

            // Instanciar partículas en la posición de la bola
            if (prefabExplosion != null)
            {
                Instantiate(prefabExplosion, transform.position, Quaternion.identity);
            }

            // Reproducir sonido independiente aunque la bola se destruya
            if (sonidoImpacto != null)
            {
                AudioSource.PlayClipAtPoint(sonidoImpacto, transform.position, volumenSonido);
            }

            Destroy(collision.gameObject);
            Destroy(gameObject);
        }
    }
}