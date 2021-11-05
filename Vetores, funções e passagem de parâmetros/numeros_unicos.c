/*

Função que recebe um vetor de n inteiros e retorna quantos números distintos
existem no vetor.

*/


#include "numeros_unicos.h"//Utilizado para avaliação do prog

int qtd_numeros_unicos(int v[], int n) {
    int v2[n], contador_v = 0, contador_v2 = 0, ocorrencias = 0, resultado = 0;
    for (contador_v2 = 0; contador_v2 < n; contador_v2++) {
        v2[contador_v2] = -1;
    }
    for (contador_v = 0; contador_v < n; contador_v++) {
        for (contador_v2 = 0; contador_v2 < n; contador_v2++) {
            if (contador_v == 0) {
                break;
            }
            if (v[contador_v] == v2[contador_v2]) {
                ocorrencias++;
                break;
            }
        }
        if (ocorrencias == 0 ) {
            resultado++;
            v2[contador_v] = v[contador_v];
        }
        ocorrencias = 0;
    }
    return resultado;
}
