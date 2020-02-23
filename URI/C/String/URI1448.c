//URI Online Judge | 1448
//Telefone Sem Fio

#include <stdio.h>
#include <string.h>

int main (){
    int i, n, l, j, t1 = 0, t2 = 0, desempate = 0;
    char frasecerta[101];
    char fraset1[101];
    char fraset2[101];

    scanf ("%d", &n);
    getchar();

    for (i = 1; i <= n; i++)
    {
        t1 = 0;
        t2 = 0;
        gets (frasecerta);
        gets (fraset1);
        gets (fraset2);

        l = strlen(frasecerta);

        for (j = 0; j < l; j++)
        {
            if (fraset1[j] == frasecerta[j]){
                t1 += 1;
                if (fraset1[i] != fraset2[i]){
                    desempate = 1;
                }
            }
            
            if (fraset2[i] == frasecerta[i]){
                t2 += 1;
            }
        }

        if (t1 > t2){
            printf ("Instancia %d\n", i);
        }else if (t2 > t1) {
            printf ("Instancia %d\ntime 2\n", i);
        }else if (t1 == t2){
             for(int i = 0; i < l; ++i){
                if(fraset1[i] == frasecerta[i] && fraset2[i] != frasecerta[i]){
                    printf("time 1\n");
                    break;
                }
                else if(fraset1[i] != frasecerta[i] && fraset2[i] == frasecerta[i]){
                    printf("time 2\n");
                    break;
                }else {
                    printf ("Instancia %d\nempate\n", i+1);
                    break;
                }
            }
        }
    }
    return 0;
}
