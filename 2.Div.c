// Find quotient and remainder of division calculation by function with 2 integers and pointers as follows   

// void div_rem(int a, int b, int *quotient, int *remains);


#include <stdio.h>

void div_rem(int a, int b, int *quotient, int *remains);

int main(void)
{
    int a, b, quotient, remains;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    div_rem(a, b, &quotient, &remains);
    printf("The quotient is %d and the remainder is %d \n", quotient, remains);

    return 0;
}

void div_rem(int a, int b, int *quotient, int *remains)
{
    *quotient = a / b;
    *remains = a % b;
}

