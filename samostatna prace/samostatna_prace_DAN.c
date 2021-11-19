/*
Úkol è. 4 - zadání (12.11.2021)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mzda, dan;
    printf("Zadej mzdu: ");
    scanf("%f", &mzda);

    if(mzda <= 10000){
        dan = mzda * 0.1;
    }
    else{
        dan = 10000 * 0.1;
        if(mzda <= 20000){
            dan = dan + (mzda - 10000) * 0.2;
        }
        else{
            dan = dan + 10000 * 0.2;
            dan = dan + (mzda - 20000) * 0.3;
        }
    }
    printf("Dan je: %.0f", dan);
    return 0;
}
