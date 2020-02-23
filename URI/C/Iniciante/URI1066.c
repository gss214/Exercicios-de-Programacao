//URI Online Judge | 1066
//Pares, Ímpares, Positivos e Negativos

#include <stdio.h>

int main (){
    
    int i, valorespositivos = 0, valoresnegativos = 0, valorespares = 0, valoresimpares = 0;
    
    for (i = 1; i <= 5; i++){
        int f;
        scanf ("%d", &f);

            if (f > 0){
                valorespositivos += 1;
            }
            if (f < 0){
                valoresnegativos += 1;
            }
            if (f % 2 == 0){
                valorespares += 1;
            }else
            {
                valoresimpares += 1;
            }  
    }

    printf ("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", valorespares, valoresimpares, valorespositivos, valoresnegativos);

    return 0;
}
