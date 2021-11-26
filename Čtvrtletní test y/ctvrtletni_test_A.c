#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cislo;
    printf("Zadej cislo: ");
    scanf("%d", &cislo);
    if(cislo > 0 && cislo < 10){
        printf("%d je jednociferne", cislo);
    }
    else if(cislo >= 10 && cislo < 100){
        printf("%d je dvouciferne", cislo);
    }
    else if(cislo >= 100 && cislo < 1000){
        printf("%d je trojciferne", cislo);
    }
    else{
        printf("%d je mimo interval");
    }
    return 0;
}
