using System.Collections;
using TMPro;
using UnityEngine;

public class JuegoSueloControler : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI textMeshProUGUI;
    [SerializeField] GameObject prefabEnemigo;
    [SerializeField] GameObject prefabAmigo;

    public bool juegoActivo = false;
    private float alturaEnemigos = 1.5f; // 1.5m sobre el suelo se ve mejor en RA
    private float rangoSpawn = 0.8f;     // Rango más cerrado para no salirse del plano
    private int puntuacion = 0;

    public static JuegoSueloControler instanciaJuego;

    private void Awake()
    {
        if (instanciaJuego == null)
        {
            instanciaJuego = this;
        }
    }

    void Start()
    {
        depurar("Apunta al suelo y mueve el móvil...");
    }

    public void IniciarJuego(GameObject contenido = null)
    {
        if (!juegoActivo)
        {
            juegoActivo = true;
            depurar("¡Suelo detectado! Puntuación: 0");
            StartCoroutine(GenerarObjetos());
        }
    }

    IEnumerator GenerarObjetos()
    {
        while (juegoActivo)
        {
            yield return new WaitForSeconds(1.5f);

            // Calculamos la posición relativa al suelo (centro del suelo en X y Z)
            Vector3 offsetLocal = new Vector3(
                UnityEngine.Random.Range(-rangoSpawn, rangoSpawn),
                alturaEnemigos,
                UnityEngine.Random.Range(-rangoSpawn, rangoSpawn)
            );

            // TransformPoint convierte esa posición local a coordenadas reales sobre el suelo
            Vector3 posicionSpawn = transform.TransformPoint(offsetLocal);

            GameObject prefabInstanciar = (UnityEngine.Random.value > 0.4f) ? prefabEnemigo : prefabAmigo;
            Instantiate(prefabInstanciar, posicionSpawn, Quaternion.identity, transform);
        }
    }

    public void choqueSueloEnemigo()
    {
        puntuacion--;
        depurar("Puntuación: " + puntuacion);
    }

    public void choqueSueloAmigo()
    {
        puntuacion++;
        depurar("Puntuación: " + puntuacion);
    }

    public void depurar(string msg)
    {
        if (textMeshProUGUI != null)
            textMeshProUGUI.text = msg;
    }
}
