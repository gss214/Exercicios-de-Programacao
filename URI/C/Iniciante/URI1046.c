//URI Online Judge | 1046
//Tempo de Jogo

#include <stdio.h>

int main (){

    int inicial, final, horas = 0;
    scanf ("%d %d", &inicial, &final);

    while (1)
    {
        inicial++;
        horas++;
        if (inicial >= 24){
            inicial = 0;
        }
        if (inicial == final){
            break;
        }
        if (horas > 23){
            break;
        }
    }
    
    printf ("O JOGO DUROU %d HORA(S)\n", horas);

    return 0;
}