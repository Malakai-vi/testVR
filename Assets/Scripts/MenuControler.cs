using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuControler : MonoBehaviour
{
    public void Jugar()
    {
        Debug.Log("Jugar");
        SceneManager.LoadScene("Escena1");
    }
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    public void Salir()
    {
        Debug.Log("Salir");
    }
}
