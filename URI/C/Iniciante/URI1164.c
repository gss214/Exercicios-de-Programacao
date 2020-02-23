//URI Online Judge | 1164
//Número Perfeito

#include <stdio.h> 

int main (){

    int n, i, j, divisores = 0;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        int num;
        scanf ("%d", &num);

        for (j = 0; j < num; j++){
            if (j > 0){
                if (num % j == 0){
                    divisores += j;
                }
            }
        }

        if (divisores == num){
            printf ("%d eh perfeito\n", num);
        }else {
            printf ("%d nao eh perfeito\n", num);
        }

        divisores = 0;
    }

    return 0;
}
