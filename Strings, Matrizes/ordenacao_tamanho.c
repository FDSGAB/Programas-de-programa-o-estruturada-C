/*

Função que verifica se o tamanho das palavras de uma string recebida estão em
ordem crescente (1) decrescente (2) ou sem ordem (3)

*/


#include "ordenacao_tamanho.h"//Utilizado para a avaliação do prog

int verificar_ordenacao_tamanho(char texto[]) {
   int percorre_texto = 0, tamanho_texto = 0, conta_palavra = 1, tamanho_antigo_palavra = 0, tamanho_atual_palavra = 0, conta_tamanho_palavra = 0, crescente = -1, decrescente = 0, igual = 0;
   //Percorre a frase e conta seu tamanho e qtde de palavras
   for (percorre_texto = 0; 1; percorre_texto++) {
       if (texto[percorre_texto] == '\0') {
           tamanho_texto = percorre_texto;
           break;
        }
       if (texto[percorre_texto] == ' ') {
           conta_palavra++;
        }
    }
    //conta o tamanho das palavras no texto e compara eles
    for (percorre_texto = 0; percorre_texto < (tamanho_texto-1); percorre_texto++) {
        if (texto[percorre_texto] == ' ' || texto[percorre_texto] == '.') {
            tamanho_atual_palavra = conta_tamanho_palavra;
            if (tamanho_atual_palavra > tamanho_antigo_palavra) {
                crescente++;
            }
            if (tamanho_atual_palavra < tamanho_antigo_palavra) {
                decrescente++;
            }
            if (tamanho_atual_palavra == tamanho_antigo_palavra) {
                igual++;
            }
            tamanho_antigo_palavra = tamanho_atual_palavra;
            conta_tamanho_palavra = 0;
        }
        else {
            conta_tamanho_palavra++;
        }
    }
    // informa se é crescente, decrescente ou desordenado
    if (crescente>=1 && decrescente == 0) {
        return 1;
    }
    if (decrescente>=1 && crescente == 0) {
        return 2;
    }
    return 3;
}
