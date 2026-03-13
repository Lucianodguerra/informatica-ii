# 🔹 Clase 05 – Manejo avanzado de archivos II

> ⚠️ La diapositiva no es exactamente la que vimos en clase debido a que no se guardaron los últimos cambios realizados durante la clase del **26 de abril**. No cuento con el tiempo necesario para rehacerla completamente, por eso les aclaro lo siguiente:

Esta clase continúa con el trabajo sobre archivos binarios, haciendo foco en la modificación de archivos ya existentes, el uso de archivos temporales y las mejores prácticas para evitar errores típicos.

## Temas incluidos

- Modificación de archivos en C
- Escritura directa en archivos (modo `"r+b"`)
- Uso de archivos temporales para modificaciones
- Buenas prácticas generales

## Lo que se vio en clase pero no quedó reflejado en la diapositiva

- El problema típico que ocurre al usar `fread()` seguido de `fwrite()` sin realizar antes un `fseek()` en archivos abiertos con `"r+b"`.
- Por qué es necesario hacer un `fseek()` "falso" entre la lectura y la escritura.
- Qué alternativas existen.
- Recomendaciones y buenas prácticas para evitar corrupción de datos o errores de lógica al modificar archivos binarios.

## 📂 Código fuente

👉 [Ver ejemplos y ejercicios en GitHub](https://github.com/SrWilbur/INFOII/tree/main/C/clase_05)

## 📘 Lecturas complementarias

- [Modificación segura de archivos binarios](modificacion.md)
- [Uso de archivos temporales](archivos-temporales.md)
- [Errores comunes con fread/fwrite y cómo evitarlos](errores-comunes.md)
# 🔹 Clase 05 – Manejo avanzado de archivos II

> ⚠️ La diapositiva no es exactamente la que vimos en clase debido a que no se guardaron los últimos cambios realizados durante la clase del **26 de abril**. No cuento con el tiempo necesario para rehacerla completamente, por eso les aclaro lo siguiente:

Esta clase continúa con el trabajo sobre archivos binarios, haciendo foco en la modificación de archivos ya existentes, el uso de archivos temporales y las mejores prácticas para evitar errores típicos.

## Temas incluidos

- Modificación de archivos en C
- Escritura directa en archivos (modo `"r+b"`)
- Uso de archivos temporales para modificaciones
- Buenas prácticas generales

## Lo que se vio en clase pero no quedó reflejado en la diapositiva

- El problema típico que ocurre al usar `fread()` seguido de `fwrite()` sin realizar antes un `fseek()` en archivos abiertos con `"r+b"`.
- Por qué es necesario hacer un `fseek()` "falso" entre la lectura y la escritura.
- Qué alternativas existen.
- Recomendaciones y buenas prácticas para evitar corrupción de datos o errores de lógica al modificar archivos binarios.

## 📂 Código fuente

👉 [Ver ejemplos y ejercicios en GitHub](https://github.com/SrWilbur/INFOII/tree/main/C/clase_05)

## 📘 Lecturas complementarias

- [Modificación segura de archivos binarios](modificacion.md)
- [Uso de archivos temporales](archivos-temporales.md)
- [Errores comunes con fread/fwrite y cómo evitarlos](errores-comunes.md)
