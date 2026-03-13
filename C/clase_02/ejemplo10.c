#include <stdio.h>

int main() {
    FILE *fp = fopen("F:\\FALOPA\\archivo_grande.txt", "r");
    if (fp == NULL) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
        Sleep(1);
    }

    printf ("\nArchivo leido completamente... (?)\n");

    fclose(fp);
    return 0;
}
