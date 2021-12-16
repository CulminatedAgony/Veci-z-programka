#include <stdio.h>
#include <stdlib.h>

int main () {
    int ncislo, cislo, shody = 0;
    srand(time(NULL));
    ncislo = rand() % 10 + 1;
    do{
        shody++;
        printf("Zadej cislo: ");
        scanf("%d", &cislo);
}
    while(ncislo != cislo);
    printf("\nNahodne cislo bylo %d a uhodli jste na %d pokus", ncislo, shody);
   return 0;
}
