using UnityEngine;
using Vuforia;

public class Piramide : MonoBehaviour
{
    private ObserverBehaviour observer;
    [SerializeField] string figuraImageTarget = "Piramide";
    public GameController controladorJuego;

    void Awake()
    {
        observer = GetComponent<ObserverBehaviour>();
    }

    private void OnEnable()
    {
        if (observer != null)
            observer.OnTargetStatusChanged += OnTargetStatusChanged;
    }

    private void OnDisable()
    {
        if (observer != null)
            observer.OnTargetStatusChanged -= OnTargetStatusChanged;
    }

    private void OnTargetStatusChanged(ObserverBehaviour behaviour, TargetStatus status)
    {
        // Solo actúa cuando la cámara enfoca activamente el marcador
        if (status.Status == Status.TRACKED || status.Status == Status.EXTENDED_TRACKED)
        {
            if (controladorJuego != null)
            {
                controladorJuego.chequear(figuraImageTarget);
            }
        }
    }
}