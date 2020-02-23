#include <stdio.h>

int main()
{
    int n, i;
    char op;
    int c;
    int totalverba = 0, totalgasto = 0;
    
    scanf ("%d", &n);
    
    for (i = 0; i < n; i++){
        scanf (" %c", &op);
        scanf ("%d", &c);
        
        if (op == 'G'){
            totalgasto += c;
        }else{
            totalverba += c;
        }
    }
    
    if (totalverba >= totalgasto){
        printf ("A greve vai parar.\n");
    }else {
        printf ("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
    return 0;
}