// Write program to call two functions as follows to get bigger numbers from 2 input arguments and 3 input arguments. 

// int *biggest_of_two(int*, int*);
// int *biggest_of_three(int*, int*, int*);


#include <stdio.h>

int *biggest_of_two(int*, int*);
int *biggest_of_three(int*, int*, int*);

int main(void)
{
    int num1, num2, num3;
    int *biggest;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    biggest = biggest_of_two(&num1, &num2);
    printf("The biggest number is %d \n", *biggest);

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    biggest = biggest_of_three(&num1, &num2, &num3);
    printf("The biggest number is %d \n", *biggest);

    return 0;
}

int *biggest_of_two(int *num1, int *num2)
{
    if (*num1 > *num2)
        return num1;
    else
        return num2;
}

int *biggest_of_three(int *num1, int *num2, int *num3)
{
    if (*num1 > *num2 && *num1 > *num3)
        return num1;
    else if (*num2 > *num1 && *num2 > *num3)
        return num2;
    else
        return num3;
}
