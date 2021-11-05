/*

Programa que calcula o valor de uma expressão com somatórios:
somatório (de 1(i) a n) *(m + 5*somatorio (de 1(k) a m) (k + 1)^2)

*/

#include <stdio.h>

int main(){
    int n = 0, m = 0, total = 0;
    scanf ("%d", &n);
    scanf ("%d", &m);
    for (int contador = 1; contador <= m; contador++) {
        total = total + (contador+1)*(contador+1);
    }
    total = n * ( m + ( total * 5 ) );
    printf ("%d", total);
    return 0;
}
