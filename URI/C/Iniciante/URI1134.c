//URI Online Judge | 1134
//Tipo de Combustível

#include <stdio.h>

int main (){

    int tipocomb, alcool = 0, gas = 0, disel = 0;

    scanf ("%d", &tipocomb);

    while (tipocomb != 4){
        if (tipocomb == 1){
            alcool += 1;
        }else if (tipocomb == 2){
            gas += 1;
        }else if (tipocomb == 3){
            disel += 1;
        }

        scanf ("%d", &tipocomb);
    }

    printf ("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gas, disel);

    return 0;
}
