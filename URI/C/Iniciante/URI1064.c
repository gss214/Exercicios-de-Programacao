//URI Online Judge | 1064
//Positivos e Média

#include <stdio.h>

int main (){

    double n1,n2,n3,n4,n5,n6,mediap, somap;
    int i,n=6,valoresp=0;

    for (i = 0; i < n; i++){
        float f;
        scanf ("%f", &f);
            if (f >= 0){
                valoresp += 1;
                somap += f;
            }
    }

    mediap = somap / valoresp;

    printf ("%d valores positivos\n", valoresp);
    printf ("%.1lf\n", mediap); 


    return 0;
}
