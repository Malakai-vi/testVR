using TMPro;
using UnityEngine;

public class GameControlerDeteccionPlano : MonoBehaviour
{
    private Rigidbody rb;
    private float velocidad = 0f;
    private float giroCapibara = 0f;
    [SerializeField] TextMeshProUGUI textMeshProUGUI;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    void FixedUpdate()
    {
        // Movimiento hacia adelante usando fixedDeltaTime para físicas
        Vector3 movimiento = transform.forward * velocidad * Time.fixedDeltaTime;
        rb.MovePosition(rb.position + movimiento);

        // Giro independiente de la velocidad de traslación
        if (giroCapibara != 0f)
        {
            float cantidadGiro = giroCapibara * Time.fixedDeltaTime;
            Quaternion giro = Quaternion.Euler(0f, cantidadGiro, 0f);
            rb.MoveRotation(rb.rotation * giro);
        }
    }

    public void Acelerar()
    {
        if (textMeshProUGUI != null) textMeshProUGUI.text = "Acelero";
        velocidad = 2f; // Ajusta este valor según la escala de la escena AR
    }

    public void Girar()
    {
        if (textMeshProUGUI != null) textMeshProUGUI.text = "Giro";
        giroCapibara = 120f; // Aumentado para que el giro sea visible
    }

    public void frenar()
    {
        if (textMeshProUGUI != null) textMeshProUGUI.text = "Freno";
        velocidad = 0f;
        giroCapibara = 0f; // Detiene también el giro al frenar
    }

    public void Agrandar()
    {
        if (textMeshProUGUI != null) textMeshProUGUI.text = "Grande";
        // Nota: el modelo tiene una escala muy pequeña (0.0019), 
        // sumar Vector3.one * 5 podría hacerlo gigantesco de golpe.
        transform.localScale += Vector3.one * 0.001f;
    }

    public void Achicar()
    {
        if (textMeshProUGUI != null) textMeshProUGUI.text = "Chico";
        Vector3 nuevaEscala = transform.localScale - (Vector3.one * 0.001f);

        float escalaMinima = 0.0001f;
        if (nuevaEscala.x > escalaMinima)
        {
            transform.localScale = nuevaEscala;
        }
    }
}