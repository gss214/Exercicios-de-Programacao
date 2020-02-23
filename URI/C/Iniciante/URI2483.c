//URI Online Judge | 2483
//Feliz Nataaal!

#include <stdio.h>
#include <string.h>

int main() {

    int n, i;
    char a = 'a';

    scanf ("%d", &n);

    for (i = 0; i < n; i++){
        
        if (i == 0){
            printf ("Feliz nat");
            printf ("%c", a);
        }else {
            printf ("%c", a);
        }
    }

    printf ("l!\n");

    return 0;
}
