#include <stdio.h>
#include <string.h>


typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} Producto;

int actualizar_precio(const char *, int , float );
int actualizar_lista(const char *, const char * );

int main() {
    int cont = actualizar_lista("productos.dat", "alimentos");

    if ( cont ) {
        printf("Precio actualizado en %d elementos.\n", cont);

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


int actualizar_lista(const char *file, const char *descripcion) {

    FILE *fp = fopen(file, "r+b");
    if (fp == NULL) {
        perror("No se pudo abrir el archivo");
        return 1;  }

    Producto prod;
    int cont=0;

    // Recorrido secuencial buscando el código
    while (fread(&prod, sizeof(Producto), 1, fp) == 1) {
        if (strcmp (prod.descripcion, descripcion) == 0) {
            prod.precio *=2 ;
            // Retroceder el puntero de archivo al inicio del registro encontrado
            fseek(fp, - (long)sizeof(Producto), SEEK_CUR);
            fwrite(&prod, sizeof(Producto), 1, fp);
            fseek (fp, 0, SEEK_CUR);
            cont++;

        }
    }

    fclose(fp);
    if (cont > 0)
        return cont;
    else
        return 0; // no encontrado
}

