/*
Test - vstup a výstup v jazyce C - skupina B
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Zadej odpory\n");
    printf("R1: ");
    scanf("%f", &a);
    printf("R2: ");
    scanf("%f", &b);
    printf("Vysledny odpor paralelniho zapojeni odporu je %.3f", (a * b) / (a + b));
    return 0;
}
