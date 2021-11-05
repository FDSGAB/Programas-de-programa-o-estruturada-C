#include "frase.h"
#include "math.h"

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {


    int percorre_frase = 0, tamanho_palavra_atual = 0, conta_palavras = 1;

    int vetor_tamanho_palavras[100], contador_vetor = 0; 

    *soma = 0;
    *max = 0;
    *min = 1000;
    

    for (percorre_frase = 0; 1; percorre_frase++) {
        if (frase[percorre_frase] == '\0') {
            if (tamanho_palavra_atual-1 > *max && tamanho_palavra_atual >=1) {
                    *max = tamanho_palavra_atual-1;
                }
            if (tamanho_palavra_atual-1 < *min && tamanho_palavra_atual >=1) {
                    *min = tamanho_palavra_atual-1;
                }
            *soma += (tamanho_palavra_atual - 1);
            vetor_tamanho_palavras[contador_vetor] = tamanho_palavra_atual-1;
            contador_vetor++;
            tamanho_palavra_atual = 0;
            break;
        }


        // Espaço , . ; : ! ? 
        if (frase[percorre_frase] == ' '|| frase[percorre_frase] == '.' || frase[percorre_frase] == ',' || frase[percorre_frase] == ':' || frase[percorre_frase] == ';' || frase[percorre_frase] == '!' || frase[percorre_frase] == '?') {
            if (frase[percorre_frase] == ' ') {
                conta_palavras++;
                if (tamanho_palavra_atual > *max && tamanho_palavra_atual >=1) {
                    *max = tamanho_palavra_atual;
                }
                if (tamanho_palavra_atual < *min && tamanho_palavra_atual >=1) {
                    *min = tamanho_palavra_atual;
                }
                if (tamanho_palavra_atual >=1) {
                    *soma += tamanho_palavra_atual;
                    vetor_tamanho_palavras[contador_vetor] = tamanho_palavra_atual;
                    contador_vetor++;
                }
                tamanho_palavra_atual = 0;

            }
            else {
                continue;
            }
        }

        //Conta as letras
        else {
            tamanho_palavra_atual++;
        }
    }

    *media = *soma / ((double) conta_palavras);

    double soma_desvio = 0; 
    int contador_desvio = 0;
    for (contador_desvio = 0; contador_desvio < contador_vetor ; contador_desvio++) {
        soma_desvio += (vetor_tamanho_palavras[contador_desvio] - *media) * (vetor_tamanho_palavras[contador_desvio] - *media);
    } 
    soma_desvio = soma_desvio / conta_palavras;

    *desvio = sqrt(soma_desvio);

}