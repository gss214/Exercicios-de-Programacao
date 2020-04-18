#include <stdio.h>

int main(){
    int x,y,i;
    scanf ("%d %d", &x,&y);
    for (i = 0; i < y; i++)
    {
        int ld;
        ld = x%10;
        if (ld == 0){
            x /= 10;
        } else {
            x--;
        }
    }
    printf ("%d\n", x);
}