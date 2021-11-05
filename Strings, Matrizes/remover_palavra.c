#include "remover_palavra.h"

void remover_palavra(int i, char frase[]) {
    int contador_frase = 0, contador_palavra = 1, contador_vetor = 0, tamanho = 0, vetor_espacos[101], contador_auxiliar = 0;
    for (contador_frase = 0; 1; contador_frase++) {
        if (frase[contador_frase] == '\0') {
            tamanho = contador_frase;
            break;
        }
        if ((frase[contador_frase] == ' ' || frase[contador_frase] == ',' || frase[contador_frase] == ':' || frase[contador_frase] == '.')) {
            if (frase[contador_frase-1] == ',' || frase[contador_frase-1] == ':' || frase[contador_frase-1] == '.') {
                continue;
            }
            contador_palavra++;
            vetor_espacos[contador_vetor] = contador_frase;
            contador_vetor++;
        }
    }
    if (i == 1) {
        for (contador_frase = (vetor_espacos[0]+1); contador_frase<=tamanho; contador_frase++ ) {
            frase[contador_auxiliar] = frase[contador_frase];
            contador_auxiliar++;
        }
    }
    else if (i>1 && i<contador_palavra) {
        int limite_inferior = 0, limite_superior = 0;
        limite_inferior = i - 2;
        limite_superior = i - 1;
        for (contador_frase = 0; contador_frase<=tamanho; contador_frase++) {
            if (contador_frase > vetor_espacos[limite_inferior]-1 && contador_frase <= vetor_espacos[limite_superior]-1 && frase[contador_frase] != ',' && frase[contador_frase] != ':') {
                continue;
            }
            frase[contador_auxiliar] = frase[contador_frase];
            contador_auxiliar++;
        }
    }
    else if (i == contador_palavra) {
        int limite_superior = 0;
        limite_superior = i - 2;
        for (contador_frase = 0; contador_frase<=tamanho; contador_frase++) {
            if (contador_frase > vetor_espacos[limite_superior]-1 && contador_frase != tamanho) {
                continue;
            }
            frase[contador_auxiliar] = frase[contador_frase];
            contador_auxiliar++;
        }
    }
}