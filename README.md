# Proyecto de Realidad Aumentada (AR) - Unity & Vuforia

## Pasos Realizados
1. **Configuración Inicial:**
   - Creación del proyecto 3D en Unity 6 y configuración del entorno local conectado a GitHub mediante Visual Studio Code.
   - Definición del archivo `.gitignore` optimizado para Unity.
2. **Integración de Vuforia Engine:**
   - Instalación del paquete de Vuforia y configuración de la licencia en la `ARCamera`.
   - Importación de la base de datos de Image Targets personalizados desde el Target Manager de Vuforia.
3. **Modelado y Geometría (ProBuilder):**
   - Creación de primitivas 3D básicas: Cubo, Esfera y una Pirámide (configurando el cono a 4 lados).
   - Anidamiento correcto de los objetos 3D como "hijos" de sus respectivos `Image Targets` ("padres") en la Jerarquía.
4. **Optimización de RA:**
   - Desactivación del `Device Tracker` (Extended Tracking) en la configuración de Vuforia para asegurar que los objetos desaparezcan estrictamente al retirar los marcadores de la cámara.

---

## Problemas y Soluciones
* **Problema 1: Ausencia de una figura de pirámide predeterminada y necesidad de modelado.**
  * *Causa:* Unity no incluye una primitiva 3D de pirámide por defecto en sus opciones básicas.
  * *Solución:* Instalación del paquete **ProBuilder** a través del Package Manager de Unity para modelar un cono de 4 lados adaptado como pirámide, corrigiendo posteriormente su orientación con una rotación de `180` en el eje **X**.
* **Problema 2: La pirámide aparecía "acostada" o al revés.**
  * *Causa:* Desajuste en el eje de rotación local tras crearla con ProBuilder.
  * *Solución:* Restablecer la posición y rotación a 0, aplicar una rotación de `180` en el eje **X** y ajustar la altura en el eje **Y** del componente *Transform*.
* **Problema 3: Error al hacer `git push` por archivos pesados ("Large files detected").**
  * *Causa:* El paquete comprimido de Vuforia (`.tgz`) superaba el límite gratuito de 100 MB de GitHub.
  * *Solución:* 
    1. Se deshizo el commit local con `git reset --soft HEAD~1`.
    2. Se eliminó el archivo del seguimiento de Git usando `git rm --cached`.
    3. Se añadió la regla `*.tgz` al archivo `.gitignore` para evitar futuros bloqueos.

---

## Pasos para Continuar en clase
1. Abrir la terminal (o GitHub Desktop) en el ordenador de clase.
2. Clonar el repositorio actualizado:
   ```bash
   git clone [https://github.com/Malakai-vi/testVR.git](https://github.com/Malakai-vi/testVR.git)# testVR
3. Configuración para Android (Tablet Lenovo 132FU):
   1. Ir a File > Build Settings.
   2. Seleccionar Android en la lista de plataformas y hacer clic en Switch Platform.
   3. Ir a Player Settings y configurar los parámetros de Android (como la API mínima compatible con la tablet). Ante la duda, ver la primera grabación de la pantalla del martes 06-10-2026.
