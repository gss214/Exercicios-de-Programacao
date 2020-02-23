//URI Online Judge | 1060
//Números Positivos

#include <stdio.h>

int main(){

    int i, cnt = 0;

    for (i = 0; i < 6; i++)
    {
        double aux;
        scanf ("%lf", &aux);
        if (aux > 0){
            cnt++;
        }
    }
    printf ("%d valores positivos\n", cnt);    

    return 0;
}