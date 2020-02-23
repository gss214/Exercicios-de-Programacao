//URI Online Judge | 1555
//Funções

#include <stdio.h>

int funcoes (int x, int y){
    int r1, r2, r3;

    r1 = ((3 * x) * (3 * x)) + (y * y);
    r2 = (2 * (x * x) + ((5 * y) * (5 * y)));
    r3 = (-100 * x) + (y * y * y);

    if (r1 > r2 && r1 > r3){
        printf ("Rafael ganhou\n");
        return 0;
    }else if (r2 > r3 && r2 > r1){
        printf ("Beto ganhou\n");
        return 0;
    }else if (r3 > r1 && r3 > r2){
        printf ("Carlos ganhou\n");
        return 0;
    }
}

int main (){

    int result, n, x, y, i;

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf ("%d %d", &x, &y);
        result = funcoes(x,y);
    }
    

    return 0;
}
