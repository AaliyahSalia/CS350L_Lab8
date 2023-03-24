// How to return multiple values from function in C programming

// Hint: return array to a function


#include <stdio.h>

int* getValues() {
    static int values[3] = { 1, 2, 3 };
    return values;
}

int main() {
    int* arr = getValues();

    printf("The values are: %d, %d, %d\n", arr[0], arr[1], arr[2]);
    return 0;
}

