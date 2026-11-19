using UnityEngine;


public class EnemigoControler : MonoBehaviour
{
    [SerializeField] JuegoSueloControler controladorJuego;
    
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (transform.localPosition.y < -2f)
        {
            Destroy(gameObject);
        }
    }

    private void OnTriggerEnter(Collider collider)
    {
        // Si el objeto toca el suelo
        if (collider.gameObject.CompareTag("Suelo"))
        {
            // Si era un enemigo (Malo) y toca el suelo, perdemos una vida
            if (gameObject.CompareTag("Enemigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloEnemigo();
                //textMeshProUGUI.text = "PIERDES VIDA";
            }
            else if (gameObject.CompareTag("Amigo"))
            {
                JuegoSueloControler.instanciaJuego.choqueSueloAmigo();
            }
            // Destruir el objeto al tocar el suelo en cualquier caso
            Destroy(gameObject);
        }
    }
}
