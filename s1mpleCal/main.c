#include "stdio.h"
#include "stdint-gcc.h"

int main(){
    printf("\nSimple Calculator");

    printf("\n1. Basic Calculator");
    printf("\n2. GCD");
    printf("\n3. Exit");

    printf("\nSelect options[1 - 3]:");


    uint8_t option;
    scanf("%hhu",&option);
    printf("\nMode selected: %hhd",option);

    if (option == 1 ){
        uint32_t first_number, second_number;
        char operand;

        printf("\nEnter first number: ");
        scanf("%u",&first_number);

        printf("\nEnter operand [+, -, *, /]: ");
        scanf("%c",&operand);

        printf("\nEnter second number: ");
        scanf("%u",&second_number);

        switch (operand) {
            case '+':
            printf("+");
            break;

            case '-':
            printf("-");
            break;

            case '*':
            printf("-");
            break;

            case '/':
            printf("-");
            break;

            default:
            break;
        }
    }
    else if (option == 2) {
        uint32_t first_number, second_number;

        printf("\nEnter first number: ");
        scanf("%u", &first_number);
        printf("First number: %u\n", first_number);

        printf("\nEnter second number: ");
        scanf("%u", &second_number);
        printf("Second number: %u", second_number);

        uint32_t gcd = (first_number < second_number) ? second_number : first_number;

        for (;gcd >= 1; gcd--){
            if (first_number % gcd == 0 && second_number % gcd == 0)
            break;
        }

        printf("\nGCD(%u, %u) = %u", first_number, second_number, gcd);
    }
    return 0;
}