/*

Programa que calcula o determinante de uma matriz n x n com uma função recursiva
pelo teorema de laplace

*/




#include "determinante.h"//Utilizado para avaliação do prog
#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {


    //Passa os valores da m_entrada pra m_saida excluindo a primeira linha e a coluna c que no caso da matriz é c
    int linhas = 0, colunas = 0, colunas_msaida_aux = 0;
    for (linhas = 1; linhas < n; linhas++) {
        for (colunas = 0;  colunas < n; colunas++) {
            if (colunas != c) {
                m_saida[linhas-1][colunas_msaida_aux] = m_entrada[linhas][colunas];
                colunas_msaida_aux++;
            }
        }
        colunas_msaida_aux = 0;
    }


}

float calcula_determinante(int n, float m_entrada[n][n]) {

    float m_saida[n-1][n-1];

    //Devolve o caso trivial
    if (n-1 == 0) {
        return m_entrada[n-1][n-1];
    }


    else {
        int c = 0, muda_sinal = 1, det = 0;

        //Percorrendo um laço fazendo matrizes menores n-1 x n-1
        for (c = 0; c < n; c++) {
            remove_primeira_linha_e_coluna_c(n, m_entrada , m_saida, c);
            det = det + muda_sinal * m_entrada[0][c]*calcula_determinante(n-1, m_saida);
            muda_sinal *= -1;
        }
        muda_sinal = 1;
        return det;
    }
}

int main() {
    //Le o numero de linhas e colunas que a matriz terá
    int n;
    scanf("%d", &n);

    //Le e armazena os elementos inputados na matriz nxn
    float matriz[n][n];
    int conta_linha = 0, conta_coluna = 0;
    for (conta_linha = 0; conta_linha < n; conta_linha++) {
        for (conta_coluna = 0; conta_coluna < n; conta_coluna++) {
            scanf("%f", &matriz[conta_linha][conta_coluna]);
        }
    }

    //Cria a matriz de saída presente na função pra remover linha e coluna
    float m_saida[n-1][n-1];



    //Calcula o determinante
    printf("%.2f\n", calcula_determinante(n,matriz));



    return 0;
}
