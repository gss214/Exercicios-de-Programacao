//URI Online Judge | 2061
//As Abas de Péricles

#include<stdio.h>
#include<string.h>

int main (){

    int N,M, soma = 0, i;
    char clicou[10] = "clicou";
    char fechou[10] = "fechou";

    scanf ("%d %d", &N, &M);
    soma = N;

    for (i = 0; i < M; i++)
    {
        char aux[10];
        scanf ("%s", aux);
        if (strcmp (aux, clicou) == 0){
            soma--;
        }
        else if (strcmp (aux, fechou) == 0){
            soma--;
            soma += 2;
        }
    }
    printf ("%d\n", soma);
}