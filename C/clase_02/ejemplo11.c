#include <stdio.h>
#include <windows.h> // Necesario para Sleep en Windows

int main() {
    FILE *fp = fopen("F:\\FALOPA\\archivo_grande.txt", "r");
    if (fp == NULL) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
        Sleep(1); // Espera para poder quitar el pendrive a tiempo
    }

    // Verificación real del fin de archivo
    if (feof(fp)) {
        printf("\nFin del archivo alcanzado correctamente.\n");
    } else {
        printf("\nLa lectura termino pero no por fin de archivo.\n");
    }

    fclose(fp);
    return 0;
}

