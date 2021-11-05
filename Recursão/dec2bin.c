/*

Função recursiva que converte um número natural decimal para base binária

*/



#include "dec2bin.h"//Utilizado para avaliação do prog

int dec2bin(int n_decimal) {
    if (n_decimal==0) {
        return 0;
    }
    else {
        return n_decimal%2 + 10*dec2bin(n_decimal/2);
    }
}
