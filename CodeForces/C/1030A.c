#include <stdio.h>

int main (){
    int a,i;
    scanf ("%d", &a);
    for (i = 0; i < a; i++)
    {
        int x;
        scanf ("%d", &x);
        if (x == 1){
            a = -1;
            break;
        }
    }
    if (a==-1){
        printf ("HARD\n");
    } else {
        printf ("EASY\n");
    }    
    return 0;
}