#include "contafreq.h"

int contafreq(int num, int digito) {
   if (num == 0) {
       return 0;
   }
   else {
       if (digito == (num%10)) {
           return 1 + contafreq(num/10, digito);
       }
       else {
           return 0 + contafreq(num/10,digito);
       }
   }
}