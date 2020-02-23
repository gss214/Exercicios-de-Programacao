//URI Online Judge | 2057
//Fuso Horário

#include <stdio.h>

int main (){

    int s, t, f, horachegada;

    scanf ("%d %d %d", &s, &t, &f);
 
    horachegada = s + t + f;

    while(horachegada > 24){
        horachegada -= 24;       
    }

    if  (horachegada < 0){
        horachegada += 24;
    }
    if (horachegada == 24){
        horachegada = 0;
    }
    printf ("%d\n", horachegada);

    return 0;
}
