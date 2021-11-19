/*
Test - vstup a výstup v jazyce C - skupina A
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, d;
    const int c = 24;
    printf("Zadej pocet dnu: ");
    scanf("%d", &a);
    printf("Zadej pocet hodin: ");
    scanf("%d", &b);
    d = a * c + b;
    printf("%d dnu a %d hodin je celkem %d hodin", a, b, c);
    return 0;
}
