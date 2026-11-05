# 🔷 Juego Educativo de Realidad Aumentada: Figuras Geométricas (AR)

Pequeño juego desarrollado en **Unity** con la integración de **Vuforia Engine** para el aprendizaje y reconocimiento de figuras geométricas en 3D mediante tarjetas de Realidad Aumentada.

---

## 📋 Descripción del Proyecto
El objetivo de este proyecto es poner a prueba el conocimiento del usuario sobre figuras geométricas básicas. La aplicación solicita al jugador que identifique mediante la cámara una figura concreta dentro de un tiempo límite, haciendo uso de marcadores físicos (tarjetas de Vuforia).

### 📐 Figuras Geométricas Implementadas
* **Cubo**
* **Esfera**
* **Pirámide**
* **Icosaedro**

---

## 🎮 Dinámica de Juego
1. **Escena de Presentación:** Al iniciar la aplicación, se muestra la pantalla de inicio con el título del juego, una explicación breve de su funcionamiento y un botón interactivo para comenzar la partida.
2. **Rondas Aleatorias y Temporizador:** 
   * El sistema selecciona de forma aleatoria el nombre de una figura geométrica que el usuario debe buscar.
   * Se activa una **cuenta atrás visible** en pantalla.
   * **Acierto:** Si el usuario muestra la tarjeta correcta ante la cámara, aparece el modelo 3D flotando sobre ella, acompañado de un texto descriptivo y un incremento en la puntuación.
   * **Fallos/Tiempo agotado:** Si el tiempo se agota sin detectar la tarjeta correcta, se penaliza registrando el error y se activa una respuesta visual/auditiva.
3. **Flujo y Finalización:** Tras un número determinado de rondas, el juego finaliza mostrando la puntuación total obtenida por el jugador y ofrece la opción de volver a jugar de manera inmediata.

---

## 🗂️ Estructura de Escenas del Proyecto
Dado que este repositorio contiene ejercicios complementarios, las escenas principales del proyecto se distribuyen de la siguiente manera:

* **`MenuPrincipal` (o escena inicial):** Escena de presentación y navegación del juego educativo de geometría.
* **`Escena1`:** Escena principal del juego donde se ejecuta la lógica de RA, temporizador, aleatoriedad y puntuación con Vuforia.
* **`DeteccionPlano`:** Escena independiente correspondiente a ejercicios prácticos adicionales del curso (detección de superficies planas).
* **`PlanoEnemigo`:** Escena independiente para lógicas adicionales de otros ejercicios prácticos.

---

## 📱 Dispositivos de Prueba
Las pruebas de funcionamiento, rendimiento y estabilidad de la Realidad Aumentada se han llevado a cabo en los siguientes dispositivos físicos:
* **Tablet Lenovo** (utilizada para validar el comportamiento de la interfaz y la estabilidad de la cámara en pantallas de mayor formato).
* **Smartphone personal** (utilizado para pruebas dinámicas de juego, detección de tarjetas a diferentes distancias y control del temporizador).

---

## 🛠️ Últimos problemas encontrados y soluciones
Durante el desarrollo e integración del proyecto, se solventaron los siguientes inconvenientes técnicos:

1. **Conflicto de ScriptableSingleton duplicado (`XRSimulationRuntimeSettings`):**
   * *Problema:* Al sincronizar el repositorio con Git, aparecían advertencias en la consola indicando que el archivo de configuración de simulación XR ya existía o estaba duplicado entre los paquetes y la carpeta de assets locales.
   * *Solución:* Se localizó y eliminó la instancia redundante en la carpeta local, manteniendo únicamente la gestionada por los paquetes de Unity, y se forzó una reimportación limpia (`Reimport All`).
2. **Errores en el sistema de compilación interno (`binlog` / procesos en segundo plano):**
   * *Problema:* Bloqueos esporádicos al intentar generar compilaciones o sincronizar carpetas pesadas tras un *pull*.
   * *Solución:* Limpieza de los archivos temporales y caché del proyecto (eliminación manual de las carpetas `Library`, `Obj` y `Temp` para permitir que Unity las regenerara de cero) junto con el cierre de procesos huérfanos de MSBuild.
3. **Falta de lectura de las API levels de Android:**
   * *Problema:* Avisos relacionados con la versión del SDK al conectar el emulador o empaquetar para Android.
   * *Solución:* Verificación de los módulos instalados desde el Unity Hub (**Android Build Support**, **SDK & NDK** y **OpenJDK**) y reasignación de las rutas recomendadas en las preferencias de Unity (`External Tools`).