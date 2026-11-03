using UnityEngine;
using UnityEditor;
using UnityEngine.ProBuilder;
using System.Collections.Generic;

public class CreadorIcosaedro : EditorWindow
{
    [MenuItem("Tools/ProBuilder/Crear Icosaedro Real")]
    public static void Crear()
    {
        float t = (1.0f + Mathf.Sqrt(5.0f)) / 2.0f; // Proporción áurea

        // 1. Definir los 12 vértices del icosaedro regular
        List<Vector3> vertices = new List<Vector3>() {
            new Vector3(-1,  t,  0).normalized, new Vector3( 1,  t,  0).normalized, new Vector3(-1, -t,  0).normalized, new Vector3( 1, -t,  0).normalized,
            new Vector3( 0, -1,  t).normalized, new Vector3( 0,  1,  t).normalized, new Vector3( 0, -1, -t).normalized, new Vector3( 0,  1, -t).normalized,
            new Vector3( t,  0, -1).normalized, new Vector3( t,  0,  1).normalized, new Vector3(-t,  0, -1).normalized, new Vector3(-t,  0,  1).normalized
        };

        // 2. Definir los triángulos (20 caras) en sentido de las agujas del reloj
        int[] triangulos = new int[] {
            0, 11, 5,   0, 5, 1,    0, 1, 7,    0, 7, 10,   0, 10, 11,
            1, 5, 9,    5, 11, 4,   11, 10, 2,  10, 7, 6,   7, 1, 8,
            3, 9, 4,    3, 4, 2,    3, 2, 6,    3, 6, 8,    3, 8, 9,
            4, 9, 5,    2, 4, 11,   6, 2, 10,   8, 6, 7,    9, 8, 1
        };

        // En la API moderna, las caras se crean pasando arrays de índices en un bucle
        List<Face> faces = new List<Face>();
        for (int i = 0; i < triangulos.Length; i += 3)
        {
            faces.Add(new Face(new int[] { triangulos[i], triangulos[i + 1], triangulos[i + 2] }));
        }

        // 3. Crear el objeto nativo ProBuilder
        GameObject go = new GameObject("Icosaedro_ProBuilder");
        ProBuilderMesh mesh = go.AddComponent<ProBuilderMesh>();

        // Reconstruir la geometría usando el método oficial moderno
        mesh.RebuildWithPositionsAndFaces(vertices, faces);

        // Refrescar normales y colisiones
        mesh.Refresh();
        mesh.ToMesh();

        // 4. Añadir el colisionador con la malla actualizada de ProBuilder
        MeshCollider collider = go.AddComponent<MeshCollider>();
        collider.sharedMesh = mesh.GetComponent<MeshFilter>().sharedMesh;

        // Seleccionar automáticamente el objeto creado
        Selection.activeGameObject = go;
    }
}