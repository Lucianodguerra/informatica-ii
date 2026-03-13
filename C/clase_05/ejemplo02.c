#include <stdio.h>

typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} Producto;

int main() {
    FILE *archivo, *tempArchivo;
    Producto p;

    archivo = fopen("productos.dat", "rb");
    if (archivo == NULL) {
        perror("No se pudo abrir productos.dat");
        return 1;
    }

    tempArchivo = fopen("productos.tmp", "wb");
    if (tempArchivo == NULL) {
        perror("No se pudo crear productos.tmp");
        fclose(archivo);
        return 1;
    }

    // Leer de productos.dat y escribir en productos.tmp con modificaciones
    while (fread(&p, sizeof(Producto), 1, archivo) == 1) {
        // Por ejemplo: aumentar el precio un 10%
        p.precio *= 1.10f;

        fwrite(&p, sizeof(Producto), 1, tempArchivo);
    }

    fclose(archivo);
    fclose(tempArchivo);

    // Reemplazar el archivo original con el temporal
    if (remove("productos.dat") != 0) {
        perror("Error eliminando productos.dat");
        return 1;
    }

    if (rename("productos.tmp", "productos.dat") != 0) {
        perror("Error renombrando productos.tmp");
        return 1;
    }

    printf("Archivo productos.dat modificado exitosamente usando archivo temporal.\n");

    return 0;
}
