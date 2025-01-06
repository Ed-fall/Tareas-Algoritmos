#include <stdio.h>

int main() {
    float diametro, altura, sumaDiametros = 0, sumaAlturas = 0;
    int contador = 0;
    char respuesta;

    do {
        printf("Ingrese el diámetro del tronco: ");
        scanf("%f", &diametro);

        printf("Ingrese la altura del tronco: ");
        scanf("%f", &altura);

        sumaDiametros += diametro;
        sumaAlturas += altura;
        contador++;

        printf("¿Desea ingresar otro tronco? (S/N): ");
        scanf(" %c", &respuesta);
    } while (respuesta == 'S' || respuesta == 's');

    if (contador > 0) {
        printf("Promedio de diámetros: %.2f\n", sumaDiametros / contador);
        printf("Promedio de alturas: %.2f\n", sumaAlturas / contador);
    } else {
        printf("No se ingresaron datos.\n");
    }

    return 0;
}
