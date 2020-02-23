//URI Online Judge | 2753
//Saída 7

#include <stdio.h> 

int main (){

    int n = 26, i, j = 97;

    for (i = 0; i < n; i++){
        printf ("%d e %c\n", j, j);
        j += 1; 
    }

    return 0;
}
