//URI Online Judge | 1017
//Gasto de Combustível

#include <stdio.h>

int main (){

    double qntl = 0, tempoviagem, vm, km = 0;

    scanf ("%lf %lf", &tempoviagem, &vm);

    km = vm * tempoviagem;
    qntl = km / 12;

    printf ("%.3lf\n", qntl);

    return 0;
}
