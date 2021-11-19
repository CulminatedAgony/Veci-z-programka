/*
Úkol è. 3 - jednoduchá podmínka
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Zadej prvni stranu: ");
    scanf("%d", &a);
    printf("Zadej druhou stranu: ");
    scanf("%d", &b);
    if(a == b)
    {
        printf("Jedna se o ctverec s delkou strany %d cm a obsahem: %d", a, a * b);
    }
    else
    {
        printf("Jedna se o obedlnik s delkou stran %d cm a %d cm a s obsahem: %d", a, b, a * b);
    }
    return 0;
}
