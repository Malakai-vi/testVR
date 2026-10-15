using UnityEngine;
using Vuforia;
using TMPro;
using Unity.VisualScripting;

public class Piramide : MonoBehaviour
{
    private ObserverBehaviour observer;
    [SerializeField] string figuraImageTarget;
    public GameControler controladorJuego;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
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
        //Logica del juego
        controladorJuego.chequear(figuraImageTarget);
    }

    void Update()
    {

    }
}
