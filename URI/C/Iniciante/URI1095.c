//URI Online Judge | 1095
//Sequencia IJ 1

#include <stdio.h>

int main (){

    int j = 60, i = 1;
    while (j > -5)
    {
        printf ("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }
    return 0;
}