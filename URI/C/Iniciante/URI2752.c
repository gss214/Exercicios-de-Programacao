//URI Online Judge | 2752
//Saída 6

#include <stdio.h>
#include <string.h>

int main (){

    char uri[51];

    strcpy (uri, "AMO FAZER EXERCICIO NO URI");

    printf ("<%s>\n", uri);
    printf ("<%30s>\n", uri);
    printf ("<%.20s>\n", uri);
    printf ("<%-20s>\n", uri);
    printf ("<%-30s>\n", uri);
    printf ("<%.30s>\n", uri);
    printf ("<%30.20s>\n", uri);
    printf ("<%-30.20s>\n", uri);


    return 0;
}
