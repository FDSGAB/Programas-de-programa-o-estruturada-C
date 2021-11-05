/*

Função que calcula a multiplica entre dois numeros (a*b) pelo método da
multiplicação russa (ou etíope)

*/


#include "multiplicacao.h"//Utilizado para avaliação do prog

int multiplicacao_russa(int a, int b) {
    if (a == 1) {
        return b;
    }
    else {
        if (a%2 == 0) {
            return multiplicacao_russa(a/2,b*2);
        }
        else {
            return b + multiplicacao_russa(a/2,b*2);
        }
    }
}
