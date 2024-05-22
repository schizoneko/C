#include "stdio.h"
#include "stdint-gcc.h"

int main(){
    printf("\nSimple Calculator");

    printf("\n1. Basic Calculator");
    printf("\n2. GCD");
    printf("\n3. Exit");

    printf("\nSelect options[1 - 3]:");


    uint8_t option;
    scanf("%hhd",&option);
    printf("\nMode selected: %hhd",option);
    return 0;
}