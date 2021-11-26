#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cislo1, cislo2, vysledek;
    char operator;
    printf("Zadej operator: ");
    scanf("%c", &operator);
    printf("Zadej cislo1: ");
    scanf("%d", &cislo1);
    printf("Zadej cislo2: ");
    scanf("%d", &cislo2);

    if(operator == '+'){
        vysledek = cislo1 + cislo2;
        printf("%d + %d = %d", cislo1, cislo2, vysledek);
    }
    else if(operator == '-'){
        vysledek = cislo1 - cislo2;
        printf("%d - %d = %d", cislo1, cislo2, vysledek);
    }
    else if(operator == '*'){
        vysledek = cislo1 * cislo2;
        printf("%d * %d = %d", cislo1, cislo2, vysledek);
    }
    else{
        printf("Vyraz nelze spocitat");
    }
    return 0;
}
