#ifndef FUNCIONES_H
#define FUNCIONES_H

unsigned long int factorial(unsigned short numero) {
    unsigned long int resultado = 1;
    while(numero > 0) {
        resultado *= numero;
        numero--;
    }
    return resultado;
}

#endif