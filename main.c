#include <stdio.h>

int main(void)
{
    int giorno1, giorno2, mese1, mese2, anno1, anno2, diffgiorni, diffmesi, diffanni, differenza;
    printf("Inserisci la prima data (gg mm yyyy): ");
    scanf("%d %d %d", &giorno1, &mese1, &anno1);
    printf("Inserisci la seconda data (gg mm yyyy): ");
    scanf("%d %d %d", &giorno2, &mese2, &anno2);
    differenza = giorno2 - giorno1 + (mese2 - mese1) * 30 + (anno2 - anno1) * 360;
    diffanni = differenza/360;
    diffmesi = (differenza/30)%12;
    diffgiorni = differenza/360;
    printf("la differenza tra le due date è : %d anni, %d mesi, %d giorni", diffanni, diffmesi, diffgiorni);
    return 0;
}
