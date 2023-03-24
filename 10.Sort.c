// Write a program that would sort a list of names in alphabetical order

// Output:
// Enter names: Ananda   murugan   renuka   devi   shri

// alphabetical list:
// Ananda
// devi
// murugan
// renuka
// shri


#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void sortNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int numNames);

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int numNames = 0;

    printf("Enter names (up to %d, end with 'q'): ", MAX_NAMES);

    // Read in names
    while (numNames < MAX_NAMES) {
        scanf("%s", names[numNames]);
        if (strcmp(names[numNames], "q") == 0) {
            break;
        }
        numNames++;
    }

    // Sort names
    sortNames(names, numNames);

    // Print sorted names
    printf("Alphabetical list:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

void sortNames(char names[MAX_NAMES][MAX_NAME_LENGTH], int numNames) {
    // Selection sort algorithm
    for (int i = 0; i < numNames - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < numNames; j++) {
            if (strcmp(names[j], names[minIndex]) < 0) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            char temp[MAX_NAME_LENGTH];
            strcpy(temp, names[i]);
            strcpy(names[i], names[minIndex]);
            strcpy(names[minIndex], temp);
        }
    }
}
