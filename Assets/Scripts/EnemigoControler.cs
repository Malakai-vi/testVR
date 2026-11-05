using UnityEngine;
using TMPro;

public class EnemigoControler : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI textMeshProUGUI;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        // Si el objeto toca el suelo
        if (collision.gameObject.CompareTag("Suelo"))
        {
            // Si era un enemigo (Malo) y toca el suelo, perdemos una vida
            if (gameObject.CompareTag("Enemigo"))
            {
                textMeshProUGUI.text = "PIERDES VIDA";
            }
            // Destruir el objeto al tocar el suelo en cualquier caso
            Destroy(gameObject);
        }
    }
}
