#include "conta_linhas_texto.h"

void conta_linhas(char texto[], int largura_linha, int *qtd_linhas) {
    
    
    int percorre_texto = 0, tamanho_palavra_atual = 0, conta_palavras = 1;
    int vetor_tamanho_palavras[1000000], contador_vetor = 0; 
    
    //faz um vetor com os tamanhos das palavras, pontuações e espaços
    for (percorre_texto = 0; 1; percorre_texto++) {
        if (texto[percorre_texto] == '\0') {
            if (texto[percorre_texto] != '\n') {
                tamanho_palavra_atual++;
            }
            vetor_tamanho_palavras[contador_vetor] = tamanho_palavra_atual-1;
            contador_vetor++;
            tamanho_palavra_atual = 0;
            break;
        }
        if (texto[percorre_texto] == ' ') {
            conta_palavras++;
            if (tamanho_palavra_atual >=1) {
                vetor_tamanho_palavras[contador_vetor] = tamanho_palavra_atual;
                contador_vetor++;
                vetor_tamanho_palavras[contador_vetor] = 1;
                contador_vetor++;
            }
                tamanho_palavra_atual = 0;
        }
        else {
            tamanho_palavra_atual++;
        }
    }
    
    
    //calcula quantas linhas precisa para separar o texto
    int i = 0, contador_linhas = 1, soma = 0;
    while (i < contador_vetor) {
        soma += vetor_tamanho_palavras[i];
        if (soma == largura_linha && i+1 < contador_vetor) {
            if (i == contador_vetor-1){
                break;
            }
            contador_linhas++;
            soma = 0;
            i++;
            if (vetor_tamanho_palavras[i] == 1 && vetor_tamanho_palavras[i-1]!=1 && vetor_tamanho_palavras[i+1]!=1) {
                i++;
            }
        }
        else if (i == contador_vetor) {
            break;
        }
        else if (soma > largura_linha) {
            if (i == contador_vetor){
                contador_linhas--;
                break;
            }
            contador_linhas++;
            soma = 0;
        }
        else {
            i++;
        }
    }
    *qtd_linhas = contador_linhas;
}