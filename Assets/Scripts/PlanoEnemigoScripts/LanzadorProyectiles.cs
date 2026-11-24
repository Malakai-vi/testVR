using UnityEngine;
using UnityEngine.InputSystem;

public class LanzadorProyectiles : MonoBehaviour
{
    [SerializeField] GameObject prefabProyectil;
    [SerializeField] private float velocidadDisparo = 12f;
    private float tiempoUltimoDisparo = 0f;
    private float cadenciaDisparo = 0.25f;

    void Update()
    {
        if (Touchscreen.current != null &&
            Touchscreen.current.primaryTouch.press.wasPressedThisFrame &&
            Time.time - tiempoUltimoDisparo > cadenciaDisparo)
        {
            tiempoUltimoDisparo = Time.time;

            Vector2 posicionPantalla = Touchscreen.current.primaryTouch.position.ReadValue();
            Ray rayo = Camera.main.ScreenPointToRay(posicionPantalla);

            // Calculamos el punto objetivo exacto hacia donde apunta el dedo
            Vector3 puntoObjetivo;
            if (Physics.Raycast(rayo, out RaycastHit impacto, 20f))
            {
                puntoObjetivo = impacto.point;
            }
            else
            {
                puntoObjetivo = rayo.GetPoint(10f);
            }

            Vector3 posicionSalida = Camera.main.transform.position + (rayo.direction * 0.2f);
            Vector3 direccionExacta = (puntoObjetivo - posicionSalida).normalized;

            GameObject bala = Instantiate(prefabProyectil, posicionSalida, Quaternion.LookRotation(direccionExacta));
            Rigidbody rb = bala.GetComponent<Rigidbody>();
            rb.useGravity = false; // Evita que caiga antes de llegar al objetivo
            rb.collisionDetectionMode = CollisionDetectionMode.ContinuousDynamic;
            rb.linearVelocity = direccionExacta * velocidadDisparo;

            Destroy(bala, 3f);
        }
    }
}
