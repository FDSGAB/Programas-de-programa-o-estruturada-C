#include "maior_palindromo.h"

void converte_numero_para_vetor_de_digitos(int n, int v[]) {
    int contador1 = 0, numero = 0, tamanho = 0, contador2 = 0;
    //cria o vetor a partir do n colocando elementos novos no inicio do vetor
    for (contador1 = 0 ; contador1 <= tamanho ; contador1++) {
        if (n==0){
            break;
        }
        else{
            tamanho++;
            numero = n % 10;
            for (contador2 = tamanho -1; contador2 > 0 ; contador2--){
                v[contador2] = v[contador2-1];
            }
            v[0] = numero;
            n = n/10;
        }
    }
    //adiciona o -1 necessario a o final do vetor
    tamanho++;
    v[tamanho-1] = -1;
}

int eh_palindromo(int v[]) {
    int  contador2 = 0, tamanho2 = 0;
    //calcula o tamanho do vetor
    while (v[contador2] != -1) {
        tamanho2++;
        contador2++;
    }
    //cria o vetor ao contrario
    contador2 = 0;
    int contra[tamanho2], contador3 = 0;
    for (contador2 = tamanho2-1 ; contador2 >= 0 ; contador2--){
        contra[contador3] = v[contador2];
        contador3++;
    }
    //compara se o vetor normal e ao contrario sao iguais
    contador2 = 0;
    for (contador2 = 0 ; contador2 < tamanho2 ; contador2++) {
        if (contra[contador2] != v [contador2]) {
            return 0;
        }
    }
    return 1;

}

int maior_palindromo(int m, int fatores[2]) {
    int contadorA = 1, contadorB = 1, n = 0, maiorp = 0, vetor[1000];
    for (contadorA = 1; contadorA<=m; contadorA++) {
        for (contadorB = 1; contadorB<=m; contadorB++) {
            n = contadorA*contadorB;
            converte_numero_para_vetor_de_digitos(n, vetor);
            if (eh_palindromo(vetor)){
                if (n>maiorp) {
                    maiorp = n;
                    fatores[0] = contadorB;
                    fatores[1] = contadorA;
                }
            }
        }
    }
    return maiorp;
}