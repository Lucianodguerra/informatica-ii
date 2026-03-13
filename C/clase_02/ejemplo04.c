#include <stdio.h>

int main() {
    FILE *out = fopen("D:\\googledrive\\temperaturas.txt", "a");
    if (out == NULL) {
        perror("No se pudo abrir el archivo de temperaturas");
        return 1;
    }

    float temp;
    printf("Ingrese temperatura medida: ");
    if (scanf("%f", &temp) != 1) {
        fprintf(stderr, "Entrada inválida.\n");
        fclose(out);
        return 1;
    }

    fprintf(out, "Temperatura: %.2f C\n", temp);
    fflush(out);  // opcional: forzar escritura inmediata
    printf("Dato guardado en el log.\n");

    fclose(out);
    return 0;
}
