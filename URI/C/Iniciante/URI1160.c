//URI Online Judge | 1160
//Crescimento Populacional

#include <stdio.h>

int main (){

    int T, i, anos = 0;

    scanf ("%d", &T);

    for (i = 0; i < T; i++)
    {
        int pa, pb;
        double g1, g2;

        scanf ("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while (1)
        {
            int auxA = (g1/100) * pa;
            int auxB = (g2/100) * pb;
            pa += auxA;
            pb += auxB;
            anos++;

            if (pa > pb || anos > 100){
                break;                
            }  
        }
        if (anos > 100){
            printf ("Mais de 1 seculo.\n");
        }
        else {
            printf ("%d anos.\n", anos);
        }
        anos = 0;        
    }
    

    return 0;
}