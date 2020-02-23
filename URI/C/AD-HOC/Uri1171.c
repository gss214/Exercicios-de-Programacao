// URI Online Judge | 1171
// Frequência de Números

#include <stdio.h>

void ordenar (int v[], int n){
    int i, j, ok = 0;

    for (i = 0; i < n && ok == 0; i++)
    {
        ok = 1;
        for (j = 0; j < n-i-1; j++)
        {
            if (v[j] > v[j+1]){
                ok = 0;
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }   
    }    
}

int main (){

    int i, n, aux = 1;

    scanf ("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++)
    {
        scanf ("%d", &vet[i]);
    }

    ordenar (vet, n);

    for (i = 1; i < n; i++)
    {
        if (vet[i-1] == vet[i]){
            aux++;
        }
        else {
            printf ("%d aparece %d vez(es)\n", vet[i-1], aux);
            aux = 1;
        }
    }
    printf ("%d aparece %d vez(es)\n", vet[i-1], aux);
    return 0;
}