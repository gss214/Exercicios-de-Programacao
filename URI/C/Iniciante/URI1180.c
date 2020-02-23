//URI Online Judge | 1180
//Menor e Posição

#include <stdio.h>

int main (){

    int x, y, i, menor = 0, posicao = 0;
    scanf ("%d", &x);
    int *vetor = malloc(sizeof(int) * x);
    scanf ("%d", &y);
    vetor[0] = y;
    menor = y;
    posicao = 0;
    for (i = 1; i < x; i++){
        scanf ("%d", &y);
        vetor[i] = y;       
        if (y <= menor){
            menor = y;
            posicao = i;
        }
    }
    printf ("Menor valor: %d\nPosicao: %d\n", menor, posicao);

    return 0;
}
