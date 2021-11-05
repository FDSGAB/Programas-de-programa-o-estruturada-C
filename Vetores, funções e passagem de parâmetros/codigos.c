#include <stdio.h>
int main() {
int lista[100];
int i = 0, numero = 0;
while (numero != -1){
    for (i = 0; i < 100; i++) {
        scanf("%d", &numero);
        if (numero == -1) {
            break;
        }
        lista[i] = numero;
        int k =0;
        for (k=0; k<=i; ++k) {
            if (i>=1){
                int z = 0;
                for (z=0; z<=102; z++) {
                    int j = 0, trocador = 0;
                    for (j = 0; j<i; j++){
                        if (lista[j]>lista[j+1]){
                            trocador = lista[j];
                            lista [j] = lista [j+1];
                            lista [j+1] = trocador;
                        }
                    }
                }

            }
            printf("%d ", lista[k]);
        }
    printf("\n");
    }   
    if (numero == -1) {
            break;
        }
}
return 0;
}