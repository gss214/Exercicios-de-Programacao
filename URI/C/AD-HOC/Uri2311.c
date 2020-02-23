//URI Online Judge | 2311
//Saltos Ornamentais

#include <stdio.h>

typedef struct 
{
    char nome[100];
    float gd;
    float notas[7];
    float notafinal;
} Competidor;

void ordenar (float v[]){
    int i, j, ok = 0;

    for (i = 0; i < 7 && ok == 0; i++)
    {
        ok = 1;
        for (j = 0; j < 7-i-1; j++)
        {
            if (v[j] > v[j+1]){
                ok = 0;
                float aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }   
}


int main (){

    int i, j, n;
    float soma = 0;
    Competidor atletas[100];

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf ("%s", atletas[i].nome);
        scanf ("%f", &atletas[i].gd);
        for (j = 0; j < 7; j++)
        {
            scanf("%f", &atletas[i].notas[j]);
        }
        ordenar (atletas[i].notas);
        for (j = 0; j < 7; j++)
        {
            if (j != 0 && j != 6){
                soma += atletas[i].notas[j];
            }
        }
        soma = soma * atletas[i].gd;
        atletas[i].notafinal = soma;
        soma = 0;        
    }

    for (i = 0; i < n; i++)
    {
        printf ("%s %.2f\n", atletas[i].nome, atletas[i].notafinal);
    }
    return 0;
}