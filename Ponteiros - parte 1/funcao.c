/*

Função que recebe um valor inteiro m, um valor inteiro n e um ponteiro
para um valor inteiro resultado.

O resultado é calculado pela fórmula:
somatorio (de 1(j) a m) * ((j+1)^2 + 10 * somatorio (1(k) a n) (j+k)^2)

*/


#include "funcao.h"//Utilizado pra avaliação do prog

void valor_funcao(int m, int n, int *resultado) {

    int j = 1, k =1;
    *resultado = 0;
    for (j = 1; j <= m; j++) {

        *resultado += (j + 1) * (j + 1);

        for (k = 1; k <= n; k++) {
            *resultado += 10*(j + k) * (j + k);
        }
    }
}
