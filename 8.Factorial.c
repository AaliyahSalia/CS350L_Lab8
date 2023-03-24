// Write a program in C to find the factorial of a given number using pointers. 

// Output:
//          Input a number: 5
         
//         5’s factorial: 120

#include <stdio.h>

int main()
{
    int num, i, fact = 1;
    int *ptr;

    printf("Input a number: ");
    scanf("%d", &num);

    ptr = &num;

    for (i = 1; i <= *ptr; i++)
    {
        fact = fact * i;
    }

    printf("%d's factorial: %d", *ptr, fact);

    return 0;
}

