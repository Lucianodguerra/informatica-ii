#include <stdio.h>
#include <errno.h>

int main() {
    FILE *fp = fopen("datos.txt", "r");
    if (fp == NULL) {
        perror ("Error abriendo archivo");
        return 1;
    }

    // Resto del código...

    fclose(fp);
    return 0;
}
