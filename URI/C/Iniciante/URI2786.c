//URI Online Judge | 2786
//Piso da Escola

#include <stdio.h>

int main () {

    int largura, comprimento, ltipo1, ltipo2;

    scanf ("%d %d", &largura, &comprimento);

    ltipo1 = (comprimento * largura) + (comprimento - 1) * (largura - 1);
    ltipo2 = (comprimento * 2) - 2 + (largura * 2) - 2;

    printf ("%d %d\n", ltipo1, ltipo2);

    return 0;
}
