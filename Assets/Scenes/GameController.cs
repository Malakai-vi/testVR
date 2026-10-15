using UnityEngine;
using TMPro;
using UnityEditor.Experimental.GraphView;
using Unity.VisualScripting;

public class GameControler : MonoBehaviour
{
    [SerializeField] float tiempoTotal = 10f;
    [SerializeField] TextMeshProUGUI tiempoTxt;
    [SerializeField] TextMeshProUGUI figuraAdivinarTxt;
    [SerializeField] string[] opcionesMostrar = { "Cubo", "Esfera", "Piramide" };
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    
    void Start()
    {
        ElegirNuevaFigura();
    }

    // Update is called once per frame
    void Update()
    {
        //Controlo que no se acaba el tiempo
        tiempoTotal -= Time.deltaTime;
        if (tiempoTotal <= 0)
        {
            //Ha acabado la partida
            tiempoTxt.text = "FIN DEL TIEMPO";
        }
        else
            tiempoTxt.text = tiempoTotal.ToString("F1");
    }

    private void ElegirNuevaFigura()
    {
        int posAleatoria = Random.Range(0, opcionesMostrar.Length);
        figuraAdivinarTxt.text = opcionesMostrar[posAleatoria];
    }

    public void chequear(string figuraEncontrada)
    {
        /*if (figuraEncontrada === figuraAdivinarTxt.text)
         *   //Acierto -> Contar puntos y generar nuevo elemento buscar
         *else
         *   //Error
         */
    }
}
