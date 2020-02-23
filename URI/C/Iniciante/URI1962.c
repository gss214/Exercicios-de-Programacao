//URI Online Judge | 1962
//Há Muito, Muito Tempo Atrás

#include <stdio.h>

int main (){

    int n, i, j;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        int ano;
        scanf ("%d", &ano);

        j = 2015 - ano;

        if (j < 0){
            j = (j * -1) + 1;
            printf ("%d A.C.\n", j);
        }else if (j > 0){
            printf ("%d D.C.\n", j);
        }else if (j == 0){
            printf ("1 A.C.\n");
        }
    }

    return 0;
}
