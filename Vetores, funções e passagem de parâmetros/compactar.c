#include "compactar.h"

void compactar_vetor(int v[], int n) {
    int vetor_aux[n], contador1 = 0, contador2 = 0, ocorrencias = 0, numero = 0, num_antigo = 0;
    //faz um vetor aux só com elementos -1
    for (contador1 = 0 ; contador1 < n ; contador1++ ) {
        vetor_aux[contador1] = -1;
    }
    contador1 = 0;
    for (contador1 = 0 ; contador1 < n ; contador1++) {
        if (ocorrencias == 0) {
            num_antigo = v[contador1];
        }
        numero = v[contador1];
        

        if  (numero == num_antigo && contador1<=(n-2)) {
            ocorrencias++;
        }
        else {
            if (contador1==(n-1)){
                ocorrencias++;
            }
            vetor_aux[contador2] = num_antigo;
            contador2++;
            vetor_aux[contador2] = ocorrencias;
            contador2++;
            num_antigo = numero;
            ocorrencias = 1;
        }
        if (numero == -1){
            break;
        }
    }
    contador1 = 0;
    for (contador1 = 0 ; contador1 < n ; contador1++) {
        v[contador1] = vetor_aux[contador1];
    } 
}