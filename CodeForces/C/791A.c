#include <stdio.h>

int main(){

    int x,y,z=0;
    scanf ("%d%d", &x, &y);
    while (x <= y)
    {
        x*=3; y*=2;
        z++;
    }
    printf("%d\n", z);
    return 0;
}