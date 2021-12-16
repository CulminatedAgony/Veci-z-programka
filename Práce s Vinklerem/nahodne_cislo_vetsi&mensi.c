#include <stdio.h>
#include <stdlib.h>

int main () {
    int ncislo, cislo, shody = 0;
    srand(time(NULL));
    ncislo = rand() % 10 + 1;
    do{
        shody++;
        printf("\nZadej cislo: ");
        scanf("%d", &cislo);
        if(cislo > ncislo){
        printf("Nahodne cislo je mensi nez %d", cislo);
    }
    else if(cislo == ncislo){
        printf("");
    }
    else{
        printf("Nahodne cislo je vetsi nez %d", cislo);
    }
}
    while(ncislo != cislo);
    printf("\nNahodne cislo bylo %d a uhodli jste na %d pokus", ncislo, shody);
   return 0;
}
