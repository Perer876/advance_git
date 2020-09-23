#include <stdio.h>
#include "funciones.h"

int main() {
    unsigned short numero;

    while(1) {
        printf("Ingresa un numero entre el 0 y el 20: ");
        scanf("%u", &numero);
        if(numero >= 0 && numero <= 20) {
            printf("%u! = %llu", numero, factorial(numero));
            break;
        }
        else {
            printf("Intentalo de nuevo\n");
        }
    }

    return 0;
}