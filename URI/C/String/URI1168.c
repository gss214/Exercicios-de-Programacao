//URI Online Judge | 1168
//LED

#include <stdio.h>

int convert (long long number){
    int vet[100], i, cont = 0, cont2 = 0;

    for (i = 0; i < 100; i++)
    {
        vet[i] = number % 10;
        number = number / 10;
        cont2++;

        if (number == 0){
           break;
        }
    }
    
    for (i = 0; i < cont2; i++)
    {
        if (vet[i] == 1){
            cont += 2;
        }else if (vet[i] == 2){
            cont += 5;
        }else if (vet[i] == 3){
            cont += 5;
        }else if (vet[i] == 4){
            cont += 4;
        }else if (vet[i] == 5){
            cont += 5;
        }else if (vet[i] == 6){
            cont += 6;
        }else if (vet[i] == 7){
            cont += 3;
        }else if (vet[i] == 8){
            cont += 7;
        }else if (vet[i] == 9){
            cont += 6;
        }else {
            cont += 6;
        }
    }

    printf ("%d leds\n", cont);
    return 0;    
}

int main (){

    int n, i;
    long long int x;
    int vet;

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf ("%lld", &x);
        convert (x);
    }
    
    return 0;
}
