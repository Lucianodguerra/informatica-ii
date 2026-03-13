#include <stdio.h>


typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} Producto;

int actualizar_precio(const char *, int , float );

int main() {

    if (actualizar_precio("productos.dat", 1003, 191.5f)) {
        printf("Precio actualizado.\n");

    } else {

        printf("Producto no encontrado.\n");
    }
}

int actualizar_precio(const char *file, int codBuscado, float nuevoPrecio) {

    FILE *fp = fopen(file, "r+b");
    if (fp == NULL) {
        perror("No se pudo abrir el archivo");
        return 1;  }

    Producto prod;

    // Recorrido secuencial buscando el código
    while (fread(&prod, sizeof(Producto), 1, fp) == 1) {
        if (prod.codigo == codBuscado) {
            prod.precio = nuevoPrecio;
            // Retroceder el puntero de archivo al inicio del registro encontrado
            fseek(fp, - (long)sizeof(Producto), SEEK_CUR);
            fwrite(&prod, sizeof(Producto), 1, fp);
            fclose(fp);
            return 1; // éxito
        }
    }
    fclose(fp);
    return 0; // no encontrado
}

