#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = fopen("G:\\Mi unidad\\datos.txt", "w");
    if (fp == NULL) {
        perror ("Error abriendo archivo");
        return 1;
    }

    // Resto del código...

    fclose(fp);
    return 0;
}
