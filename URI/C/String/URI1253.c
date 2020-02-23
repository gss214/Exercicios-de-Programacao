//URI Online Judge | 1253
//Cifra de César

#include <stdio.h>
#include <string.h>

void cesar (char* p, int x){
    int i;

    for (i = 0; p[i] != '\0'; i++)
    {
        p[i] = p[i] - x;
        if (p[i] < 65){
              p[i] = (p[i] % 65) + 26;
            }       
    }


    printf ("%s\n", p);
}

int main (){

    int n, i, x;
    char p[55];

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf ("%s", p);
        scanf ("%d", &x);
        cesar(p, x);
    }
    

    return 0;
}
