#include "funcao.h"

void valor_funcao(int m, int n, int *resultado) {

    int j = 1, k =1;
    *resultado = 0;
    for (j = 1; j <= m; j++) {
        
        *resultado += (j + 1) * (j + 1);
        
        for (k = 1; k <= n; k++) {
            *resultado += 10*(j + k) * (j + k);
        }
    }
}