//URI Online Judge | 1181
// Linha na Matriz

#include <stdio.h>

int main (){

    int l;
    double mat[12][12];
    int i, j;
    char t;
    double soma;
    double media;

    scanf ("%d", &l);
    scanf (" %c", &t);
    
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf ("%lf", &mat[i][j]);
            if (t == 'S'){
                if (i == l){
                    soma += mat[i][j];
                }
            }
            else if (t == 'M'){
                if (i == l){
                    media += mat[i][j];
                }
            }
        }
    }

    media = media / 12;

    if (t == 'S'){
        printf ("%.1lf\n", soma);
    }
    else if (t == 'M'){
        printf ("%.1lf\n", media);
    }
    
    return 0;
}
