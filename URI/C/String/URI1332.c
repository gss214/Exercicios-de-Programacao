//URI Online Judge | 1332
//Um-Dois-Três

#include <stdio.h>
#include <string.h>

int palavra (char* p){
    int i, j, t, cont = 0;
    char one[6] = "one";
    char two[6] = "two";
    char three[6] = "three";

    t = strlen (p);

    for (j = 0; j < t; j++){
            for (j = 0; j < t; j++){ 
                if (p[j] == one[j]){
                    cont += 1;
                }

                if (cont >= 2){
                    printf ("1\n");
                    return 0;
                }
            }

        cont = 0;
        
        for (j = 0; j < t; j++){
            if (p[j] == two[j]){
                cont += 1;
            }

            if (cont >= 2){
                printf ("2\n");
                return 0;
            }
        }

        cont = 0;
        
        for (j = 0; j < t; j++){
            if (p[j] == three[j]){
                cont += 1;
            }

            if (cont >= 2){
                printf ("3\n");
                cont = 0;
                return 0;
            }
        }
    }    
}
            
int main (){

    int result, i, n;
    char p[10];

    scanf ("%d", &n);
 
    for (i = 0; i < n; i++){
        scanf("%s", p);
        result = palavra(p);
    }

    return 0;
}
