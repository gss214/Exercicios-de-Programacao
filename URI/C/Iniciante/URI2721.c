//URI Online Judge | 2721
//Indecisão das Renas

#include <stdio.h>

int main (){

    int a, i, soma=0, controle=0; 
    for (i = 0; i < 9; i++){
       
        scanf ("%d", &a);

        soma += a;
    }
        controle = soma % 9 - 1;
        
            if (controle == 0){
                printf ("Dascher\n");
            }else if (controle == 1){
                printf ("Dancer\n");
            }else if (controle == 2){
                printf ("Prancer\n");
            }else if (controle == 3){
                printf ("Vixen\n");
            }else if (controle == 4){
                printf ("Comet\n");
            }else if (controle == 5){
                printf ("Cupid\n");
            }else if (controle == 6){
                printf ("Donner\n");
            }else if (controle == 7){
                printf ("Blitzen\n");
            }else{
                printf ("Rudolph\n");
            }
        

    return 0;
}
