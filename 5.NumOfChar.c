// Write a program to read a sentence and count the number of characters &words in that sentence. 
// Output:
// 	Enter a sentence: we are learning C language 
// 	Total number of words: 5
// 	Number of characters for each: 2 3 8 1 8  


#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = strlen(sentence);
    int numWords = 0;
    int numChars = 0;

    // Count words and characters
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            numWords++;
        } else {
            numChars++;
        }
    }
    // Add one more word to the total count
    numWords++;

    printf("Total number of words: %d\n", numWords);
    printf("The number of characters are: %d ", numChars);

    // Print number of characters for each word
    printf("\nNumber of characters for each: ");
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            printf("%d ", count);
            count = 0;
        } else {
            count++;
        }
    }
    // Print the count for the last word
    printf("%d\n", count);

    return 0;
}
