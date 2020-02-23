//URI Online Judge | 1153
//Fatorial Simples

#include <stdio.h>

int main (){

    int i, n, nanterior = 1, f, resultado;

    scanf ("%d", &n);

    for (i = 0; i < n; i++){

        if (i > 0){
            resultado = nanterior * resultado;
            nanterior -= 1;
        }else {
            resultado = n;
            nanterior = n - 1;
        }    
    }

    printf ("%d\n", resultado);

    return 0;
}
