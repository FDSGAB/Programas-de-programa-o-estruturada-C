/*

Função que calcula o superfatorial de um número, ou seja,
calcula o fatorial dos fatoriais de um número

*/

#include "superfatorial.h"//Utilizado para avaliação do prog

long superfatorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        int contador = 0, total = 1;
        for (contador = 1; contador<=n; contador++) {
            total *=  contador;
        }
        return total*superfatorial(n-1);
    }
}
