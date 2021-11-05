#include <stdio.h>

int main () {

    char frase[100];
    fgets(frase, 100, stdin);
    int espacos = 0, contador_frase = 0;
    for (contador_frase = 0; contador_frase < 101; contador_frase++) {
        if (frase[contador_frase] == ' ') {
            espacos++;
        }
    }
    if (espacos == 0) {
        printf("%d", 1);
    }
    else {
        printf("%d", (espacos+1));
    }
    return 0;
}