/*
�kol �. 2 - vstup a v�stup dat
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    const float g = 9.81;
    printf("Zadej cas[S]: ");
    scanf("%d", &t);
    printf("Teleso urazi za %ds %.3fm",t ,(g * t * t)/2);
    return 0;
}
