#include "superfatorial.h"

long superfatorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        int contador = 0, total = 1;
        for (contador = 1; contador<=n; contador++) {
            total *=  contador;
        }
        return total*superfatorial(n-1);
    }
}