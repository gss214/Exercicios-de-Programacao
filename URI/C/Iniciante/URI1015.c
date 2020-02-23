//URI Online Judge | 1015
//Distância Entre Dois Pontos

#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,y1,y2,dist;
    scanf ("%lf %lf", &x1, &y1);
    scanf ("%lf %lf", &x2, &y2);
    double aux = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));
    dist = sqrt (aux);
    printf ("%.4lf\n", dist);
    return 0;
}