//URI Online Judge | 2968
//Hora da Corrida

#include <stdio.h>

int main (){

    int v,n,i;
    scanf ("%d %d", &v, &n);

    for (i = 1; i < 10; i++)
    {
        printf("%d%c", (i * v * n) % 10 ? ((i * v * n) / 10) + 1 : (i * v * n) / 10, i < 9 ? ' ' : '\n');
    }
    return 0;    
}