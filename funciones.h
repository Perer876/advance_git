#ifndef FUNCIONES_H
#define FUNCIONES_H

unsigned long long factorial(unsigned short numero) {
    // Número de salida maxima: 18,446,744,073,709,551,615
    unsigned long long resultado = 1;
    while(numero > 0) {
        resultado *= numero;
        numero--;
    }
    return resultado;
}

#endif