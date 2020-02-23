//URI Online Judge | 2029
//Reservatório de Mel

#include <stdio.h> 

int main (){

    double volume, diametro, altura, raio, area, pi = 3.14;

    while (scanf("%lf %lf", &volume, &diametro) != EOF){
        
        raio = diametro / 2;

        area = pi * raio * raio;
        altura = volume / area;
        
        printf ("ALTURA = %.2lf\n", altura);
        printf ("AREA = %.2lf\n", area);
    }

    return 0;
}
