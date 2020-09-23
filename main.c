#include <stdio.h>
#include "funciones.h"

int main() {
    unsigned short numero;

    while(1) {
        printf("Ingresa un numero entre el 0 y el 12: ");
        scanf("%i", &numero);
        if(numero >= 0 && numero <= 12) {
            printf("%i! = %i", numero, factorial(numero));
            break;
        }
        else {
            printf("Intentalo de nuevo\n");
        }
    }

    return 0;
}