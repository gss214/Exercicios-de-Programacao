#include <stdio.h>

int main()
{
    int i, j;
    
    scanf ("%d %d", &i, &j);
    
    if (j - i >= 3)
        printf ("Muito bem! Apresenta antes do Natal!\n");
    else if (j - i < 0)
        printf  ("Eu odeio a professora!\n");
    else if (j - i < 3){
        printf ("Parece o trabalho do meu filho!\n");
        j += 2;
        if (j <= 24)
            printf ("TCC Apresentado!\n");
        else
            printf ("Fail! Entao eh nataaaaal!\n");
    }
    return 0;
}
