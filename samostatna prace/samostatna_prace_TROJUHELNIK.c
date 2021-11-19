/*
Náhradní úkol
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Zadej uhel alfa: ");
    scanf("%d", &a);
    printf("Zadej uhel beta: ");
    scanf("%d", &b);
    printf("Zadej uhel gama: ");
    scanf("%d", &c);
    if((a + b + c) < 180 ){
        printf("Soucet zadanych uhlu %d, %d, %d je %d. Nejedna se o trojuhelnik", a, b, c, a + b + c);
    }
    else{
        printf("Zadane uhly %d, %d, %d tvori trojuhelnik", a, b, c);
    }
    return 0;
}
