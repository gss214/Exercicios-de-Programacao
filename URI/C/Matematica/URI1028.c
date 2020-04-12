#include <stdio.h>

int mdc (int x, int y){
    if (y==0) return x;
    return mdc (y, x % y);
}

int main(){

    int n, i;
    scanf ("%d", &n);
    
    for (i = 0; i < n; i++) {
        int x;
        int y;
        scanf ("%d", &y);
        scanf ("%d", &x);
        printf ("%d\n", mdc(x,y));
    }
}
