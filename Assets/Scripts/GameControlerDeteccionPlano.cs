using UnityEngine;

public class GameControlerDeteccionPlano : MonoBehaviour
{
    private Rigidbody rb;
    private float velocidad = 0f;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 movimiento = transform.forward * velocidad * Time.deltaTime;
        rb.MovePosition(rb.position + movimiento);
    }

    public void acelerar()
    {
        velocidad = 5f;
    }

    public void frenar()
    {
        velocidad = 0f;
    }

    public void izquierda()
    {

    }

    public void derecha()
    {

    }
}
