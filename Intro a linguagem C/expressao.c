/*

Programa que lê uma expressão simples do tipo:
1+2*3=
300-20*10=
3*3+2+3*9+7=

Após a leitura, o programa calcula o resultado da expressão

*/


#include <stdio.h>

int main(){
    int num_1 = 0, num_2 = 0, num_3 = 0;
    char operacao = 'x';
    scanf("%d", &num_1);
    scanf("%c", &operacao);
    while (operacao != '=') {
        if (operacao == '+') {
            scanf("%d", &num_2);
            scanf("%c", &operacao);
            if (operacao == '+' || operacao == '-' || operacao == '=' ) {
                num_1 = num_1 + num_2;
            }
            if (operacao == '*' || operacao == '/') {
                while (operacao == '*' || operacao == '/') {
                    if (operacao == '*'|| operacao =='=') {
                        scanf("%d", &num_3);
                        num_2 = num_2 * num_3;
                        scanf("%c", &operacao);
                        if (operacao == '=') {
                            break;
                        }
                    }
                    if (operacao == '/'|| operacao =='=') {
                        scanf("%d", &num_3);
                        num_2 = num_2 / num_3;
                        scanf("%c", &operacao);
                        if (operacao == '=') {
                            break;
                        }
                    }
                }
                num_1 = num_1 + num_2;
            }

        }
        if (operacao == '-') {
            scanf("%d", &num_2);
            scanf("%c", &operacao);
            if (operacao == '+' || operacao == '-' || operacao == '=') {
                num_1 = num_1 - num_2;
            }
            if (operacao == '*' || operacao == '/') {
                while (operacao == '*' || operacao == '/') {
                    if (operacao == '*' || operacao =='=') {
                        scanf("%d", &num_3);
                        num_2 = num_2 * num_3;
                        scanf("%c", &operacao);
                        if (operacao == '=') {
                            break;
                        }
                    }
                    if (operacao == '/'|| operacao =='=') {
                        scanf("%d", &num_3);
                        num_2 = num_2 / num_3;
                        scanf("%c", &operacao);
                        if (operacao == '=') {
                            break;
                        }
                    }
                }
                num_1 = num_1 - num_2;
            }
        }
        if (operacao == '*' ) {
            scanf("%d", &num_2);
            scanf("%c", &operacao);
            num_1 = num_1 * num_2;
        }
        if (operacao == '/' ) {
            scanf("%d", &num_2);
            scanf("%c", &operacao);
            num_1 = num_1 / num_2;
        }
    }
    printf("%d", num_1);
    return 0;
}
