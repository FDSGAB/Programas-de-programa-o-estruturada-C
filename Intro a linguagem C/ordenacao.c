/*

Verifica se uma sequência de números inputados pelo usuário está em ordem
crescente, decrescente ou desordenada.
Condição de parada: colocar um número negativo

*/

#include <stdio.h>

int main(){
    int num_lido = 0, crescente = 0, decrescente = 0, total = 0, antigo = 0;
    while (num_lido>=0) {
        scanf ("%d", &num_lido);
        if (num_lido<0){
            break;
        }
        total++;
        if (total>1) {
            if (num_lido > antigo){
                crescente++;
            }
            if (num_lido < antigo){
                decrescente++;
            }
        }
        antigo = num_lido;
    }
    if (decrescente == 0 || crescente == 0 ) {
        if (crescente == 0){
            printf("DECRESCENTE");
    }   if (decrescente == 0){
            printf("CRESCENTE");
    }
    } else {
        printf("NAO ORDENADA");
    }
    return 0;
}
