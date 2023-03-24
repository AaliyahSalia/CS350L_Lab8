// Write a program in C to calculate the length of the string using a pointer.

// Output:
// Input a string : pointers

// The length of the given string pointers is:8  

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

    printf("The length of the given string '%s' is: %d", str, len - 1);

    return 0;
}

