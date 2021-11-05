/*

Programa que lê um número inteiro e conta quantos algarismos ímpares há nele

*/

#include <stdio.h>

int main(){
    int num_lido = 0, impares = 0;
    scanf ("%d", &num_lido);
    while (num_lido > 0) {
        if ((num_lido % 10) % 2 != 0){
            impares++;
        }
        num_lido = num_lido / 10;
    }
    printf ("%d", impares);
    return 0;
}
