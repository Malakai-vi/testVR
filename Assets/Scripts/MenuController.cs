using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuControler : MonoBehaviour
{
    public void Jugar()
    {
        Debug.Log("Jugar");
        SceneManager.LoadScene("Escena1");
    }

    public void Salir()
    {
        Debug.Log("Salir");
        Application.Quit();
    }
}
