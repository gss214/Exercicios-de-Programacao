//URI Online Judge | 1049
//Animal

#include <stdio.h>
#include <string.h>

int main (){

    char palavra1[50];
    char palavra3[50];
    char palavra2[50];

    scanf (" %s", palavra1);
    scanf (" %s", palavra2);
    scanf (" %s", palavra3);

    if (strcmp(palavra1, "vertebrado") == 0)
        if (strcmp(palavra2, "mamifero") == 0)
            if (strcmp(palavra3, "onivoro") == 0)
                printf ("homem\n");
            else 
                printf ("vaca\n");
        else
            if (strcmp(palavra3, "onivoro") == 0)
                printf ("pomba\n");
            else 
                printf ("aguia\n");
    else 
        if (strcmp(palavra2, "inseto") == 0)   
            if (strcmp(palavra3, "hematofago") == 0)
                printf ("pulga\n");
            else
                printf ("lagarta\n");
        else 
            if (strcmp(palavra3, "onivoro") == 0)
                printf ("minhoca\n");
            else 
                printf ("sanguessuga\n");

    return 0;
}