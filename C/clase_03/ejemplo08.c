#include <stdio.h>
#include <stdint.h>

int main() {


    FILE *fp = fopen("numeros.bin", "wb");
    if (!fp) {
        perror("No se pudo crear el archivo");
        return 1;
    }

    // Escribir 10 números (del 1 al 10)
    for (int i = 1; i <= 10; i++) {
        fwrite(&i, sizeof(uint32_t), 1, fp);
    }
    fclose(fp);

    // Reabrimos para leer el 5º número (índice 4)
    fp = fopen("numeros.bin", "rb");
    if (!fp) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    // Saltar los primeros 4 números (4 * 4 bytes = 16 bytes)
    fseek(fp, 4 * sizeof(uint32_t), SEEK_SET);

    uint32_t numero;
    fread(&numero, sizeof(uint32_t), 1, fp);
    printf("El quinto numero es: %u\n", numero);

    fclose(fp);
    return 0;
}
