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