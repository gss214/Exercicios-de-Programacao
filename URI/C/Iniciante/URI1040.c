//URI Online Judge | 1040
//Média 3

#include <stdio.h>

int main(){

    double a,b,c,d,media;
    scanf ("%lf %lf %lf %lf", &a, &b, &c, &d);
    media = (a*2 + b*3 + c*4 + d) / 10;
    if (media < 5){
        printf ("Media: %.1lf\nAluno reprovado.\n", media);
    }
    else if (media >= 7){
        printf ("Media: %.1lf\nAluno aprovado.\n", media);
    }
    else if (media > 4.9 && media < 7){
        printf ("Media: %.1lf\nAluno em exame.\n", media);
        double x;
        scanf ("%lf", &x);
        printf ("Nota do exame: %.1lf\n", x);
        media = (media + x) / 2;
        if (media >= 5){
            printf ("Aluno aprovado.\nMedia final: %.1lf\n", media);
        }
        else{
            printf ("Aluno reprovado.\nMedia final: %.1lf\n", media);
        }
    }
    
    return 0;
}