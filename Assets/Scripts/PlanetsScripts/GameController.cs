using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour
{
    [SerializeField] float tiempoTotal = 60f;
    [SerializeField] TextMeshProUGUI tiempoTxt;
    [SerializeField] TextMeshProUGUI figuraAdivinarTxt;
    [SerializeField] TextMeshProUGUI puntuacionTxt;
    [SerializeField] TextMeshProUGUI puntuacionFinalTxt;
    [SerializeField] TextMeshProUGUI mensajeAciertoTxt;
    [SerializeField] GameObject uiJuego;
    [SerializeField] GameObject finJuegoPanel;
    [SerializeField] string[] opcionesMostrar = { "Cubo", "Esfera", "Piramide", "Icosaedro" };


    private int puntuacion = 0;
    private bool juegoTerminado = false;
    private string figuraActual = "";

    void Start()
    {
        if (finJuegoPanel != null) finJuegoPanel.SetActive(false);
        if (uiJuego != null) uiJuego.SetActive(true);

        ActualizarPuntuacionUI();
        ElegirNuevaFigura();
    }

    void Update()
    {
        if (juegoTerminado) return;

        if (tiempoTotal > 0)
        {
            tiempoTotal -= Time.deltaTime;
            if (tiempoTotal <= 0)
            {
                tiempoTotal = 0;
                tiempoTxt.text = "FIN DEL TIEMPO";
                TerminarJuego();
            }
            else
            {
                tiempoTxt.text = "Tiempo: " + tiempoTotal.ToString("F1");
            }
        }
    }

    private void ElegirNuevaFigura()
    {
        if (juegoTerminado) return;

        string nuevaFigura;
        do
        {
            int posAleatoria = Random.Range(0, opcionesMostrar.Length);
            nuevaFigura = opcionesMostrar[posAleatoria];
        } while (nuevaFigura == figuraActual && opcionesMostrar.Length > 1);

        figuraActual = nuevaFigura;
        figuraAdivinarTxt.text = "Busca: " + figuraActual;
    }

    public void chequear(string figuraEncontrada)
    {
        if (juegoTerminado) return;

        if (figuraEncontrada == figuraActual)
        {
            mensajeAciertoTxt.text = "¡Acierto!";
            puntuacion += 10;
            ActualizarPuntuacionUI();
            ElegirNuevaFigura();
        }
        else
        {
            mensajeAciertoTxt.text = "Error";
            puntuacion -= 10;
            ActualizarPuntuacionUI();
            ElegirNuevaFigura();
        }
    }

    private void ActualizarPuntuacionUI()
    {
        if (puntuacionTxt != null)
        {
            puntuacionTxt.text = "Puntos: " + puntuacion;
        }
    }

    private void TerminarJuego()
    {
        juegoTerminado = true;

        if (uiJuego != null) uiJuego.SetActive(false);
        if (finJuegoPanel != null) finJuegoPanel.SetActive(true);
        if (puntuacionFinalTxt != null)
        {
            puntuacionFinalTxt.text = "Puntuación Final: " + puntuacion;
        }
        Debug.Log("Fin del juego. Puntuación total: " + puntuacion);
    }

    public void ReiniciarJuego()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void Salir()
    {
        Debug.Log("Salir");
        Application.Quit();
    }
}