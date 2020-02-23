//URI Online Judge | 1159
//Soma de Pares Consecutivos

#include <stdio.h>

int main (){

    int x, proximopar = 0, soma = 0;

    scanf ("%d", &x);

    while (x != 0){
        if (x % 2 == 0){ 
        proximopar = x;
        soma = soma + proximopar;
        proximopar = x + 2;
        soma = soma + proximopar;
        proximopar = x + 4;
        soma = soma + proximopar;
        proximopar = x + 6;
        soma = soma + proximopar;
        proximopar = x + 8;
        soma = soma + proximopar;
        }else {
        proximopar = x + 1;
        soma = soma + proximopar;
        proximopar = x + 3;
        soma = soma + proximopar;
        proximopar = x + 5;
        soma = soma + proximopar;
        proximopar = x + 7;
        soma = soma + proximopar;
        proximopar = x + 9;
        soma = soma + proximopar;
        }
        printf ("%d\n", soma);
        proximopar = 0;
        soma = 0;
        scanf ("%d", &x);
    }

    return 0;
}
