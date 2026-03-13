#include <stdio.h>


typedef struct {
    int codigo;
    char descripcion[41];
    float precio;
} Producto;

int main() {
    FILE *archivo;
    Producto productos[] = {
        {1001, "higiene", 120.50},
        {1002, "higiene", 85.30},
        {1003, "higiene", 95.75},
        {1004, "higiene", 150.00},
        {2001, "alimentos", 250.00},
        {2002, "alimentos", 310.45},
        {2003, "alimentos", 199.99},
        {3001, "bebida", 180.00},
        {3002, "bebida", 220.50}
    };

    int cantidad = sizeof(productos) / sizeof(productos[0]);

    archivo = fopen("productos.dat", "wb");
    if (archivo == NULL) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    fwrite(productos, sizeof(Producto), cantidad, archivo);

    fclose(archivo);

    printf("Archivo 'productos.dat' creado exitosamente con %d productos.\n", cantidad);

    return 0;
}
