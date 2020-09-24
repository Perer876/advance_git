#include <stdio.h>
#include "funciones.h"

int main() {
    char nombre[100];
    unsigned int edad;
    unsigned short numero;

    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);
    printf("Edad: ");
    scanf("%u", &edad);
    printf("Vas a cumplir %u", edad + 1);
    while(1) {
        printf("\nIngresa un numero entre el 0 y el 20: ");
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