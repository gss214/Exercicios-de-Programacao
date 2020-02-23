//URI Online Judge | 1099
//Soma de Ímpares Consecutivos II

#include <stdio.h>

int main (){
    int N, i;
    int soma = 0;

    scanf ("%d", &N);

    for (i = 0; i < N; i++)
    {
        soma = 0;
        int x,y,j;
        scanf ("%d %d", &x, &y);

        if (x < y){
            for (j = x+1; j < y; j++)
            {
                if (j % 2 != 0){
                    soma += j;
                }
            }
            printf ("%d\n", soma);            
        }
        else if (x > y){
            for (j = x-1; j > y; j--)
            {
                if (j % 2 != 0){
                    soma += j;
                }
            }
            printf ("%d\n", soma);            
        }
        else {
            printf ("0\n");
        }
    }
    return 0;
}