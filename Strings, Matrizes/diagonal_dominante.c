#include "diagonal_dominante.h"

int diagonal_dominante(int n, int m[][n]) {
    int contador_linha = 0, contador_coluna =0, soma = 0, diagonal = 0;
    for (contador_linha = 0; contador_linha <n; contador_linha++) {
        for (contador_coluna = 0; contador_coluna <n; contador_coluna++) {
            if (contador_linha == contador_coluna) {
                diagonal = m[contador_linha][contador_coluna];
                if (diagonal < 0) {
                    diagonal = -1*diagonal;
                }
            }
            else {
                if (m[contador_linha][contador_coluna] < 0) {
                    soma = soma + (-1*m[contador_linha][contador_coluna]);
                }
                else {
                    soma = soma + m[contador_linha][contador_coluna];
                }
            }
        }
        if (soma >= diagonal) {
            return 0;
        }
        soma = 0;
    }
    return 1;
}