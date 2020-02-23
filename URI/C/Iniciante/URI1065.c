//URI Online Judge | 1065
//Pares entre Cinco Números

#include <stdio.h>

int main(){

    int i, contadorpar = 0;

    for (i = 0; i < 5; i++){
        int f;
        scanf ("%d", &f);

            if (f % 2 == 0){
                contadorpar += 1;
            }
    }

    printf ("%d valores pares\n", contadorpar);

    return 0;
}
