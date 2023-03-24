// Write a program in C to print a string in reverse using a pointer. 

// Output:
// nput a string : pointers

// Reverse of the string is : sretniop

#include <stdio.h>

int main(void)
{
    char str[100];
    char *ptr;
    int len = 0;

    printf("Input a string : ");
    fgets(str, sizeof str, stdin);

    ptr = str;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }

    printf("Reverse of the string is : ");
    for (int i = len - 2; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}



