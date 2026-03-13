#include <stdio.h>

typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} Producto;

int main() {
    FILE *archivo;
    Producto p;

    archivo = fopen("productos.dat", "rb");
    if (archivo == NULL) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    while (fread(&p, sizeof(Producto), 1, archivo) == 1) {
        printf("Codigo: %d | Descripcion: %s | Precio: %.2f\n", p.codigo, p.descripcion, p.precio);
    }

    fclose(archivo);

    return 0;
}
