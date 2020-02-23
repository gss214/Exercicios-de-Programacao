//URI Online Judge | 1101
//Sequência de Números e Soma

#include <stdio.h>

int main (){

    int M,N,i,soma = 0;
    scanf ("%d %d", &M, &N);

    while (1){
        if (N <= 0 || M <= 0){
            break;
        }
        else {
            soma = 0;
            if (M > N){
                for (i = N; i <= M; i++)
                {
                    printf ("%d ", i);
                    soma += i;
                }
                printf ("Sum=%d\n", soma);      
            }
            else if (M < N){
                for (i = M; i <= N; i++)
                {
                    printf ("%d ", i);
                    soma += i;
                }
                printf ("Sum=%d\n", soma);      
            }
        }
        scanf ("%d %d", &M, &N);
    }
    return 0;
}