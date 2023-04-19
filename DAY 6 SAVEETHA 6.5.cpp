#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Programming does wonders in the world";
    char delim[] = " ";
    char *word, *longest_word;
    int longest_length = 0;

    word = strtok(text, delim);
    while (word != NULL) {
        int length = strlen(word);
        if (length > longest_length) {
            longest_length = length;
            longest_word = word;
        }
        word = strtok(NULL, delim);
    }

    printf("The longest word is: %s\n", longest_word);

    return 0;
}
