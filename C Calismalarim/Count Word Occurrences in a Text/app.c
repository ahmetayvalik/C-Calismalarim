#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], word[100];

    printf("Please enter a text: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter the word to search for: ");
    scanf("%s", word);

    int wordCount = 0;
    int textLength = strlen(text);
    int wordLength = strlen(word);

    for (int i = 0; i <= textLength - wordLength; ++i) {
        int match = 1;
        for (int j = 0; j < wordLength; ++j) {
            if (text[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            wordCount++;
        }
    }

    printf("The word \"%s\" occurs %d times in the text.\n", word, wordCount);

    return 0;
}
