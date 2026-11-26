# 🔷 Juego Educativo de Realidad Aumentada: Figuras Geométricas (AR)

Pequeño juego desarrollado en Unity con la integración de Vuforia Engine para el aprendizaje y reconocimiento de figuras geométricas en 3D mediante tarjetas de Realidad Aumentada.

## 📋 Descripción del Proyecto

El objetivo de este proyecto es poner a prueba el conocimiento del usuario sobre figuras geométricas básicas. La aplicación solicita al jugador que identifique mediante la cámara una figura concreta dentro de un tiempo límite, haciendo uso de marcadores físicos (tarjetas de Vuforia).

## 📐 Figuras Geométricas Implementadas

- Cubo
- Esfera
- Pirámide
- Icosaedro

## 🎮 Dinámica de Juego

1. **Escena de Presentación:** Al iniciar la aplicación, se muestra la pantalla de inicio con el título del juego, una explicación breve de su funcionamiento y un botón interactivo para comenzar la partida.
2. **Rondas Aleatorias y Temporizador:**
   - El sistema selecciona de forma aleatoria el nombre de una figura geométrica que el usuario debe buscar.
   - Se activa una cuenta atrás visible en pantalla.
   - **Acierto:** Si el usuario muestra la tarjeta correcta ante la cámara, aparece el modelo 3D flotando sobre ella, acompañado de un texto descriptivo y un incremento en la puntuación.
   - **Fallos / Tiempo agotado:** Si el tiempo se agota sin detectar la tarjeta correcta, se penaliza registrando el error y se activa una respuesta visual/auditiva.
3. **Flujo y Finalización:** Tras un número determinado de rondas, el juego finaliza mostrando la puntuación total obtenida por el jugador y ofrece la opción de volver a jugar de manera inmediata.

## 🗂️ Estructura de Escenas del Proyecto

Dado que este repositorio contiene ejercicios complementarios, las escenas principales del proyecto se distribuyen de la siguiente manera:

- `MenuPrincipal` (o escena inicial): Escena de presentación y navegación del juego educativo de geometría.
- `Escena1`: Escena principal del juego donde se ejecuta la lógica de RA, temporizador, aleatoriedad y puntuación con Vuforia.
- `DeteccionPlano`: Escena independiente correspondiente a ejercicios prácticos adicionales del curso (detección de superficies planas).
- `PlanoEnemigo`: Minijuego en Realidad Aumentada basado en detección de suelo (*Ground Plane*), donde caen objetos (`Enemigo` y `Amigo`) sobre el plano detectado y el jugador debe interceptarlos mediante disparos táctiles con proyectiles, partículas y sonido antes de que impacten en la superficie.

## 🎯 Fases Implementadas en `PlanoEnemigo` (Práctica de Detección de Planos)

Siguiendo el desarrollo incremental de la práctica (implementado con **Vuforia Engine**), la escena `PlanoEnemigo` cubre las siguientes fases:

1. **Fase 1 – Interfaz básica y destrucción de objetivos:** `Canvas` en modo *Screen Space - Overlay* con marcador de estado/puntuación (`TextMeshProUGUI`) y referencia visual de apuntado.
2. **Fase 2 – Prefabs de enemigos y efectos de explosión:** Prefabs diferenciados (`Enemigo` y `Amigo`) con efecto de partículas auto-destructibles (`ExplosionParticulas`), sonido 3D (`AudioSource.PlayClipAtPoint`) y reacción animada previa a la destrucción.
3. **Fase 3 – Generación dinámica en el escenario:** Instanciación periódica mediante corrutina (`GenerarObjetos()`) dentro de las coordenadas locales del plano detectado (`transform.TransformPoint`).
4. **Fase 4 – Prefab de proyectil y trayectoria:** Disparo táctil de proyectiles (`LanzadorProyectiles.cs`) dirigidos mediante `Physics.Raycast` desde la cámara principal con control de cadencia (*cooldown*).
5. **Fase 5 – Animación mediante físicas:** Caída controlada con `Rigidbody`, gravedad activa, detección continua (`Continuous Dynamic`) y resistencia del aire (`Linear Damping`).
6. **Fase 6 – Objetos aliados con penalización:** Inclusión de objetos `Amigo` que suman puntos al alcanzar el suelo a salvo y penalizan si son destruidos por el jugador.
7. **Fase 7 – Detección de planos como condición de juego:** Anclaje de superficie real mediante `Plane Finder` y `Ground Plane Stage` (Tag `Suelo`); los enemigos deben ser destruidos antes de impactar contra el plano.

## 📱 Dispositivos de Prueba

Las pruebas de funcionamiento, rendimiento y estabilidad de la Realidad Aumentada se han llevado a cabo en los siguientes dispositivos físicos:

- **Tablet Lenovo:** utilizada para validar el comportamiento de la interfaz y la estabilidad de la cámara en pantallas de mayor formato.
- **Smartphone personal:** utilizado para pruebas dinámicas de juego, detección de tarjetas a diferentes distancias y control del temporizador.

## 🛠️ Últimos problemas encontrados y soluciones

Durante el desarrollo e integración del proyecto, se solventaron los siguientes inconvenientes técnicos:

### 1. Conflicto de `ScriptableSingleton` duplicado (`XRSimulationRuntimeSettings`)
- **Problema:** Al sincronizar el repositorio con Git, aparecían advertencias en la consola indicando que el archivo de configuración de simulación XR ya existía o estaba duplicado entre los paquetes y la carpeta de assets locales.
- **Solución:** Se localizó y eliminó la instancia redundante en la carpeta local, manteniendo únicamente la gestionada por los paquetes de Unity, y se forzó una reimportación limpia (*Reimport All*).

### 2. Errores en el sistema de compilación interno (`binlog` / procesos en segundo plano)
- **Problema:** Bloqueos esporádicos al intentar generar compilaciones o sincronizar carpetas pesadas tras un `pull`.
- **Solución:** Limpieza de los archivos temporales y caché del proyecto (eliminación manual de las carpetas `Library`, `Obj` y `Temp` para permitir que Unity las regenerara de cero) junto con el cierre de procesos huérfanos de MSBuild.

### 3. Falta de lectura de las API levels de Android
- **Problema:** Avisos relacionados con la versión del SDK al conectar el emulador o empaquetar para Android.
- **Solución:** Verificación de los módulos instalados desde el Unity Hub (Android Build Support, SDK & NDK y OpenJDK) y reasignación de las rutas recomendadas en las preferencias de Unity (*External Tools*).

### 4. Bloqueo de Git (`index.lock`) y fallo al hacer `stash` en GitHub Desktop
- **Problema:** Error `Unable to create '.../.git/index.lock': File exists` y `fatal: stash failed` al trabajar entre distintos equipos y sincronizar cambios.
- **Solución:** Cierre de GitHub Desktop y de procesos residuales de Git, eliminación del archivo de bloqueo `index.lock` dentro de `.git/` y reintento de la operación.

### 5. Conflictos masivos de merge (`modify/delete`) en carpetas de respaldo IL2CPP
- **Problema:** Al fusionar cambios, aparecían cientos de archivos en conflicto (como `GenericMethods__*.cpp` y salidas de `il2cppOutput`) dentro de carpetas de respaldo de compilación (`*_BackUpThisFolder_ButDontShipItWithYourGame/`).
- **Solución:** Eliminación de las carpetas de respaldo rastreadas del repositorio mediante `git rm -rf --force`, finalización del commit de merge (`git commit --no-edit`), subida a la rama (`git push`) y adición de `*_BackUpThisFolder_ButDontShipItWithYourGame/` al `.gitignore`.

### 6. Cambios constantes en archivos de compilación Android/CMake (`.utmp/`)
- **Problema:** Aparición continua de archivos modificados y renombrados dentro de `.utmp/` tras compilar para Android.
- **Solución:** Inclusión de `.utmp/` en `.gitignore`, desvinculación de los archivos ya rastreados con `git rm -r --cached .utmp/` y publicación del cambio.

### 7. Inicio prematuro del juego y caída al vacío en `Ground Plane Stage` (Vuforia)
- **Problema:** Al iniciar la escena `PlanoEnemigo`, las bolas comenzaban a caer al vacío antes de que la cámara detectara y fijara el suelo real, o atravesaban el plano sin registrar colisión.
- **Solución:** 
  - Se desvinculó el inicio del juego de `OnTargetFound()` y se conectó al evento `OnContentPlaced` de `ContentPositioningBehaviour` en el `Plane Finder` (ajustando la altura de detección a `0.8 m`).
  - Se normalizó la escala del `Ground Plane Stage` a `(1, 1, 1)` y se amplió el `BoxCollider` (`Size: 20x2x20`, `Center Y: -1`) para evitar el efecto *tunneling*, manteniendo el estado de tracking en `Tracked, Extended Tracked or Limited` para que Vuforia no desactivara el collider en micro-cortes de seguimiento.
  - Se cambió la detección de impacto a `OnCollisionEnter` con detección continua (`Continuous Dynamic`) y se aumentó el `Linear Damping` de los prefabs para suavizar la caída.
  - Se eliminaron los prefabs de la jerarquía para que no aparecieran en la escena hasta ser invocados.

### 8. Bloqueo del sistema de compilación *Bee* (`tundra.log.json`)
- **Problema:** Error `Internal build system error... Failed to open file "Library/Bee/tundra.log.json"` al compilar scripts tras realizar cambios en la escena.
- **Solución:** Cierre de Unity y finalización de procesos residuales (`bee_backend.exe`), eliminación manual de la carpeta caché `Library/Bee` y reapertura del proyecto para regenerar los registros de compilación.

### 9. Disparo doble y desviación de trayectoria en proyectiles táctiles (AR)
- **Problema:** Al tocar la pantalla se instanciaban dos proyectiles simultáneamente y su trayectoria caía por debajo del objetivo debido a la gravedad y al desplazamiento inicial.
- **Solución:** Se eliminó el componente duplicado `LanzadorProyectiles` de la jerarquía, se añadió un tiempo de recarga (*cooldown*) de `0.25 s`, se desactivó la gravedad en el proyectil (`useGravity = false`) y se calculó la dirección exacta mediante `Physics.Raycast` desde la cámara principal hacia el punto tocado, integrando además sistema de partículas auto-destructibles y `AudioSource.PlayClipAtPoint`.

### 10. Falta de inicio de partida tras reorganizar el controlador y diagnóstico visual de detección (Vuforia)
- **Problema:** Tras mover el controlador del juego y reconfigurar los eventos del `Plane Finder`, la partida no arrancaba (`IniciarJuego()` no llegaba a ejecutarse) y no había forma visual de saber si Vuforia estaba anclando realmente el plano o si el fallo estaba en la lógica de aparición.
- **Solución:** 
  - Se integró `JuegoSueloControler` directamente como componente del `Ground Plane Stage` y se vinculó el GameObject real de la escena al evento `OnTargetFound()` de `DefaultObserverEventHandler` (corrigiendo una referencia errónea al archivo de script), dejando el `Plane Finder` en modo `AUTOMATIC` con `AutomaticHitTest` conectado a `PositionContentAtPlaneAnchor` y el estado de tracking en `Tracked, Extended Tracked or Limited`.
  - Para verificar en tiempo real el funcionamiento del sensor, se añadió un objeto visual (`Plane` / malla de referencia sin collider) como hijo de `Ground Plane Stage`. Esto permitió confirmar que el bloqueo provenía del momento de detección/anclaje de Vuforia y validar su correcto funcionamiento; se mantiene este elemento visual en la escena para facilitar futuros tests de calibración.