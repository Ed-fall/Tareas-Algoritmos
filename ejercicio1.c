#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;

    do {
        printf("Ingresa un número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Error.\n");
            break; 
        }

        if (numero > 0) { 
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while (1); 

    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);

    return 0;
}
