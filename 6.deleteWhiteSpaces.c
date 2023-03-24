// Write a program to read a sentence & delete all the white spaces. Replace all "." by ":". 


#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = strlen(sentence);

    // Count words and characters
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            sentence[i] = ':';
        } else if (sentence[i] == '.') {
            sentence[i] = ':';
        }
    }

    printf("%s ", sentence);

    return 0;
}

