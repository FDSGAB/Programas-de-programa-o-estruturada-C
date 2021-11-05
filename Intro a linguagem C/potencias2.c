#include <stdio.h> 
#include <stdlib.h>

int main(){
    int qtde_entradas = 0;
    scanf ("%d", &qtde_entradas);
    int cont_potencia_dois=0;
    while (qtde_entradas>=1) {
        int valor_lido = 0;
        scanf("%d", &valor_lido);
        while (valor_lido != 1) {
            if (valor_lido%2 == 0) {
                valor_lido=valor_lido/2;
                if (valor_lido == 1) {
                    cont_potencia_dois = cont_potencia_dois+1;
                }
            }
            else {
                break;
            }
        }
        qtde_entradas = qtde_entradas-1;
    }
    printf("%d", cont_potencia_dois);
    return 0;
}