//URI Online Judge | 1145
//Sequência Lógica 2

#include <stdio.h>

int main (){

    int x,y,i;
    scanf ("%d %d", &x, &y);

    for (i = 1; i <= y; i++)
    {
       printf ("%d", i);
       if (i % x == 0){
           printf ("\n");
       }
       else {
            printf (" ");
       }
    }
   // printf ("i = %d", i-1);
    if (i % x == 0){
       printf ("\n");
    }
    return 0;
}