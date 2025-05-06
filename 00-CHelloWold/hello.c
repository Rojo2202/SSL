#include <stdio.h>

int main () {
    printf("Hola mundo\n");
    FILE *archivo = fopen("output.txt","w");
    fclose(archivo);
    return 0;
}