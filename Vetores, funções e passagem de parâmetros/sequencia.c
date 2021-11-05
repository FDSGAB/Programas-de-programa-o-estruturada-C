/*

Função que recebe um vetor1 e sua n1 quantidade de inteiros e da mesma forma
um vetor2 e n2. O programa retorna quantas vezes a sequência do vetor2 ocorre
no vetor1.

*/


#include "sequencia.h"//Utilizado para avaliação pelo professor

int verificar_sequencia(int vetor1[], int n1, int vetor2[], int n2) {
    int contador_1, contador_2, ocorrencias = 0, resultado = 0;
    for (contador_1 = 0; contador_1 <= (n1-n2); contador_1++) {
        for (contador_2 = contador_1; contador_2 < (n2 + contador_1); (contador_2)++) {
            if (vetor1[contador_2] == vetor2[contador_2-contador_1]) {
                ocorrencias++;
            }
        }

        if (ocorrencias == n2) {
            resultado++;
        }
        ocorrencias = 0;

    }
    return resultado;
}
