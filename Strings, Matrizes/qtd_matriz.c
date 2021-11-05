/*

O programa lê duas matrizes e em seguida veridica quantas vezes a matriz2
ocorre na matriz1.

*/



#include <stdio.h>


int main () {


    //Leitura da matriz 1
    int linhas1 = 0, colunas1 = 0;
    scanf("%d", &linhas1);
    scanf("%d", &colunas1);
    int matriz1[linhas1][colunas1], percorre_linha1 = 0, percorre_coluna1 = 0;
    for (percorre_linha1 = 0; percorre_linha1 < linhas1; percorre_linha1++ ) {
        for(percorre_coluna1 = 0; percorre_coluna1 < colunas1; percorre_coluna1++){
            scanf("%d", &matriz1[percorre_linha1][percorre_coluna1]);
        }
    }


    //Leitura da matriz 2
    int linhas2 = 0, colunas2 = 0;
    scanf("%d", &linhas2);
    scanf("%d", &colunas2);
    int matriz2[linhas2][colunas2], percorre_linha2 = 0, percorre_coluna2 = 0;
    for (percorre_linha2 = 0; percorre_linha2 < linhas2; percorre_linha2++ ) {
        for(percorre_coluna2 = 0; percorre_coluna2 < colunas2; percorre_coluna2++){
            scanf("%d", &matriz2[percorre_linha2][percorre_coluna2]);
        }
    }


    //Verificar quantas vezes a matriz 2 ocorre na matriz 1
    int ocorrencias = 0, conta_ocorrencia = 0;
    for (percorre_linha1 = 0; percorre_linha1 < linhas1; percorre_linha1++) {
        for (percorre_coluna1 = 0; percorre_coluna1 < colunas1; percorre_coluna1++){


            //Percorrer os elementos em volta do elemento analisado e verificar se existe igualdade
            for (percorre_linha2 = 0; percorre_linha2 < linhas2; percorre_linha2++ ) {
                for(percorre_coluna2 = 0; percorre_coluna2 < colunas2; percorre_coluna2++){

                    //Tomando o elemento da matriz 1 como a(11) verifica se os elementos ao seu redor formam a matriz 2
                    if (matriz1[percorre_linha1+percorre_linha2][percorre_coluna1+percorre_coluna2] == matriz2[percorre_linha2][percorre_coluna2]) {
                        conta_ocorrencia++;
                    }

                    //Senao, pula-se a instancia
                    else{
                        conta_ocorrencia = 0;
                        continue;
                    }
                }
            }

            //Verifica se a matriz 2 esta inserida (talvez essa linha seja redundante)
            if (conta_ocorrencia == colunas2*linhas2) {
            ocorrencias++;

            }
            conta_ocorrencia = 0;


        }
    }

    //Resultado
    printf("%d", ocorrencias);

    return 0;
}
