//URI Online Judge | 1161
//Soma de Fatoriais

#include <stdio.h>

int main (){

    long long int m, n, soma = 0, fatorialm = 0, fatorialn = 0, somafm = 0, somafn = 0;

    while (scanf ("lld lld", &m, &n) != 0){

        int i = 1;
        int j = 1;

        if (n == 0){
            fatorialn = 1;
            j = 1;
        }
        if (m == 0){
            fatorialm = 1;
            i = 1;
        }

        while (i != 0){
            fatorialm = m * (m - 1);
            somafm += fatorialm;
            m -= 1;

            if (m == 1){
                i = 0;
            }
        }
        while (j != 0){
            fatorialn = n * (n - 1);
            somafn += fatorialn;
            n -= 1;

            if (n == 1){
                j = 0;
            }
        }

        soma = somafn + somafm;
        printf ("%lld", soma);
        i = 1;
        j = 1;
        somafn = 0;
        somafm = 0;
    }
}
