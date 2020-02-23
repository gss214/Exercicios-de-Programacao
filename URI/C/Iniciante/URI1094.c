//URI Online Judge | 1094
//Experiências

#include <stdio.h>

int main (){

    int N, i, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    double PC, PR, PS;
    scanf ("%d", &N);

    for (i = 0; i < N; i++)
    {
        int x;
        scanf ("%d", &x);
        char y;
        scanf (" %c", &y);

        total += x;

        if (y == 'C'){
            coelhos += x;
        }
        else if (y == 'R'){
            ratos += x;
        }
        else {
            sapos += x;
        }
    }

    PC = ((double) coelhos / total) * 100;
    PS = ((double) sapos / total) * 100;
    PR = ((double) ratos / total) * 100;

    printf ("Total: %d cobaias\n", total);
    printf ("Total de coelhos: %d\n", coelhos);
    printf ("Total de ratos: %d\n", ratos);
    printf ("Total de sapos: %d\n", sapos);
    printf ("Percentual de coelhos: %.2lf %%\n", PC);
    printf ("Percentual de ratos: %.2lf %%\n", PR);
    printf ("Percentual de sapos: %.2lf %%\n", PS);

    return 0;
}