//URI Online Judge | 1024
//Criptografia

#include <stdio.h>
#include <string.h>

void cript (char* p){
    int i, l;
    char invert;

    l = strlen (p);

    for (i = 0; i < l; i++)
    {
        if ((p[i] >= 65) && (p[i] <= 90)){
            p[i] = p[i] + 3;
        }else if ((p[i] >= 90) && (p[i] <= 122)){
            p[i] = p[i] + 3;
        }

        if (p[i] == 0){
            break;
        }
    }

    for (i = 0; i < l; i++)
    {
        invert[i] = p[l-i-1];
    }
    
    for (i = 0; i < l; i++)
    {
        p[i] = invert[i];
    }

    for (i = 0; i < l; i++)
    {
        if (i >= l/2){
            p[i] = p[i] -1;
        }
    }

    printf ("%s", p);
}

int main(){

    int n, i;
    char p[1005];

    scanf ("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf ("%s", p);
        cript(p);
    }        

    return 0;
}
