//URI Online Judge | 1061
//Tempo de um Evento

#include <stdio.h>

int main(){
    
    char dia1[10], dia2[10];
    int diainicial, diafinal;
    int horainicial, minutoinicial, segundoinicial;
    int horafinal, minutofinal, segundofinal;

    scanf (" %s", dia1);
    getchar();
    scanf ("%d", &diainicial);
    scanf ("%d : %d : %d", &horainicial, &minutoinicial, &segundoinicial);
    scanf (" %s", dia2);
    getchar();
    scanf ("%d", &diafinal);
    scanf ("%d : %d : %d", &horafinal, &minutofinal, &segundofinal);

    int dia, hora, minuto, segundo;
    int tudoprasegundoinicial, tudoprasegundofinal;
    tudoprasegundoinicial = (diainicial * 86400) + (horainicial * 3600) + (minutoinicial * 60) + segundoinicial;
    tudoprasegundofinal = (diafinal * 86400) + (horafinal * 3600) + (minutofinal * 60) + segundofinal;
    int tempofinalemseg = tudoprasegundofinal - tudoprasegundoinicial;

    dia = tempofinalemseg / 86400;
    hora = (tempofinalemseg%86400) / 3600;
    minuto = (tempofinalemseg%3600)/60;
    segundo = tempofinalemseg%60;
    printf ("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia,hora,minuto,segundo);

    return 0;
}