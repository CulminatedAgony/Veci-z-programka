/*
Test - vstup a v�stup v jazyce C - 2. term�n
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Zadej planovany pocet vyrobku: ");
    scanf("%f", &a);
    printf("Zadej pocet vyrobenych vyrobku: ");
    scanf("%f", &b);
    printf("Plan splnen na: %.2f\%%", b / a * 100);
    return 0;
}
