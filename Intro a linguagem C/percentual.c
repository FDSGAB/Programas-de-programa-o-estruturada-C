/*

Programa que lê uma sequência de números e devolve a porcentagem de quantos
são múltiplod de 10. Caso de parada: colocar um número negativo

*/

#include <stdio.h>

int main(){
    int num_lido = 0, total = 0, mult_dez = 0;
    float porcentagem = 0;
    while (num_lido>=0) {
        scanf ("%d", &num_lido);
        if (num_lido<0){
            break;
        }
        total++;
        if (num_lido % 10 == 0) {
            mult_dez++;
        }
    }
    porcentagem = (float) mult_dez / (float) total;
    printf("%.2f\n", porcentagem);
    return 0;
}
