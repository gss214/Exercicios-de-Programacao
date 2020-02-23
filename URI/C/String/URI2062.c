//URI Online Judge | 2062
//OBI URI

#include <stdio.h>
#include <string.h>

int main (){

    int n, h, i, j, l, cont = 0, flag = 0, cont2 = 0;
    char p[21];
    char obi[4] = "OBI";
    char uri[4] = "URI";
    char final[100000];

    scanf ("%d", &n);

    for (h = 0; h < n; h++)
    {
        scanf("%s", &p);
        l = strlen(p);
        flag = 0;
        for (i = 0; i < l; i++)
        {
            if (p[i] == obi[i] && l == 3 || p[i] == uri[i] && l == 3){
                cont++;
                if (cont >= 2){
                    for (j = 0; j < l; j++)
                    {
                        if (cont >= 2 && p[1] == 'B'){
                            final[cont2] = obi[j];    
                            cont2++;                  
                        }else if (cont >= 2 && p[1] == 'R'){
                            final[cont2] = uri[j];    
                            cont2++;
                        }
                    }
                    final[cont2] = 32;
                    cont2++;
                    flag = 1;
                    break;
                }
            }else {
                break;
            }
        }

        cont = 0;

        if (flag == 0){
            for (i = 0; i < l; i++)
            {
                for (j = 0; j < l; j++)
                {
                    final[cont2] = p[j];    
                    cont2++;                    
                }
                final[cont2] = 32;
                cont2++;
                flag = 1;
                break;
            }
        }
    }

    final[cont2] = '\0';
    printf ("%s\n", final);  

    return 0;
}
