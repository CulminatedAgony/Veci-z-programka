/*
Úkol è. 1: Výpoèet DPH
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Vypocet DPH \n");
    printf("========= \n");
    printf("Zadej cenu nakupu: ");
    scanf("%d", &a);
    printf("Zadej cenu DPH: ");
    scanf("%d", &b);

    printf("------------------------- \n");

    printf("Cena s DPH: %d\n", a);
    printf("Sazba DPH: %d%%\n", b);
    printf("Vyse DPH: %.fKc\n",(float)b/100*a);
    printf("Cena bez DPH: %.2f", a - a * (float)b / 100);
return 0;
}

