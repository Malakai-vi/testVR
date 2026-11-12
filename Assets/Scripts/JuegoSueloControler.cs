using System.Collections;
using TMPro;
using UnityEngine;

public class JuegoSueloControler : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI textMeshProUGUI;
    [SerializeField] GameObject prefabEnemigo;
    [SerializeField] GameObject prefabAmigo;
    public bool juegoActivo = false;
    private float alturaEnemigos = 3.0f;
    private float rangoSpawn = 1.0f;
    private int puntuacion = 0;
    public static JuegoSueloControler instanciaJuego;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    private void Awake()
    {
        if(instanciaJuego == null)
        {
            instanciaJuego = this;
        }
    }
    void Update()
    {
        
    }

    public void IniciarJuego()
    {
        if (!juegoActivo)
        {
            juegoActivo = true;
            StartCoroutine(GenerarObjetos());
        }
        
    }

    IEnumerator GenerarObjetos()
    {
        while (juegoActivo)
        {
            yield return new WaitForSeconds(1);
            Vector3 posicionAleatoria = transform.position + new Vector3(
                UnityEngine.Random.Range(-rangoSpawn,rangoSpawn), 
                alturaEnemigos,
                3.0f
                );
            //Vemos si debo generar enemigo o amigo
            GameObject prefabInstanciar = (UnityEngine.Random.value > 0.4f) ? prefabEnemigo : prefabAmigo;
            Instantiate(prefabEnemigo, posicionAleatoria, Quaternion.identity, transform);
        }
    }

    public void choqueSueloEnemigo()
    {
        puntuacion--;
        //textMeshProUGUI.text = "Puntuacion" + puntuacion;
    }

    public void choqueSueloAmigo()
    {
        puntuacion++;
        //textMeshProUGUI.text = "Puntuacion" + puntuacion;
    }

    public void depurar(string msg)
    {
        textMeshProUGUI.text = msg;
    }
}
