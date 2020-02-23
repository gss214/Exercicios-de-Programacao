//URI Online Judge | 1098
//Sequencia IJ 4

#include <stdio.h>

int main (){

    int i, j;
    int di, dj;

    for (i = 0; i < 3; i++)
    {
    
        dj = 1+i;
        printf ("I=%d J=%d\n", i,dj);
        dj++;
        printf ("I=%d J=%d\n", i,dj);
        dj++;
        printf ("I=%d J=%d\n", i,dj);
        di = 0;
        if (i == 2){
            break;
        }
        for (j = 0; j < 4; j++)
        {
            dj = 1 + i;
            di += 2;
            printf ("I=%d.%d J=%d.%d\n", i,di,dj,di);
            dj++;
            printf ("I=%d.%d J=%d.%d\n", i,di,dj,di);
            dj++;
            printf ("I=%d.%d J=%d.%d\n", i,di,dj,di);
        }
        
    }
    return 0;
}