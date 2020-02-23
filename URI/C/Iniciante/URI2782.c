//URI Online Judge | 2782
//Escadinha

#include <stdio.h>

int main () {

    int tamanhosequencia, nsequencia, i, n, nanterior, vsequencia, vsequenciaanterior, si, si2, quebra2, escadinha = 0;

    scanf ("%d", &tamanhosequencia);
    
    for (i = 1; i <= tamanhosequencia; i++){

        scanf ("%d", &n);
        
        if (i == 1){
            nanterior = n;
        }

        if (i > 1){
            if (nanterior == n){
               si += 1;
            }else{
                si = 0;
            }
            if (si == 0){
                escadinha += 2;
            }
            if (vsequencia == vsequenciaanterior){
                si2 += 1;
            }else{
                si2 = 0;
            }
            if (si2 == 0);
            escadinha += 1;
        }

        nanterior = n;
        vsequencia = nanterior - n;
        
        }
    
    printf ("%d", escadinha);

    return 0;
}
