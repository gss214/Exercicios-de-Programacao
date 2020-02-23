//URI Online Judge | 2750
//Saída 4

#include <stdio.h>

int main (){

    int mat[16];
    char c = 48;
    int octal = 0;
    int i, flag = 1, flag2 = 1;

    for (i = 0; i < 16; i++)
    {
        mat[i] = i;
    }

    printf ("---------------------------------------\n");
    printf ("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf ("---------------------------------------\n");

    for (i = 0; i < 16; i++)
    {
        if (i == 8 || i == 9){
            printf ("|      %d    |   %d    |       %c       |\n", mat[i], octal, c);
        }
        else if (i > 9){
            printf ("|     %d    |   %d    |       %c       |\n", mat[i], octal, c);
        }else {
            printf ("|      %d    |    %d    |       %c       |\n", mat[i], octal, c);
        }
        octal++;
        c++;
        if (flag == 1){
            if (octal > 7){
                octal = 10;
                flag = 0;
            }
        }

        if (flag2 == 1){
            if (c > 57){
                c = 65;
                flag2 = 0;
            }
        }
    }
    
    printf ("---------------------------------------\n");

    return 0;
}
