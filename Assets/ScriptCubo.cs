using UnityEngine;
using Vuforia;
using TMPro;

public class Cubo : MonoBehaviour
{
    private ObserverBehaviour observer;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
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
        
    }
    // Update is called once per frame
    void Update()
    {

    }
}
