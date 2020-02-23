//URI Online Judge | 1047
//Tempo de Jogo com Minutos

#include <stdio.h>

int main (){

    int Hinicial, Hfinal, Minicial, Mfinal, horas = 0, minutos = 0;
    scanf ("%d %d %d %d", &Hinicial, &Minicial, &Hfinal, &Mfinal);

    if (Hinicial == Hfinal && Hinicial == Minicial && Hinicial == Mfinal
    && Hfinal == Minicial && Hfinal == Mfinal && Minicial == Mfinal){
        horas = 24;
        minutos = 0;
    }
    else if (Hinicial > Hfinal){
        horas = 24 - Hinicial + Hfinal;    
        minutos = 60 - Minicial + Mfinal;
        if (minutos < 0)
            minutos = minutos * -1;
        if (minutos >= 60)
            minutos -= 60;
        if (Minicial > Mfinal)
            horas--;
    }
    else if (Hinicial <= Hfinal){
        horas = Hfinal - Hinicial;
        if (Minicial > Mfinal){
            horas--;
        }
        minutos = 60 - Minicial + Mfinal;
        if (minutos < 0)
            minutos = minutos * -1;
        if (minutos >= 60)
            minutos -= 60;
    }
    
    printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}