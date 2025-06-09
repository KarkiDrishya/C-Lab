//5) Create a C program to count the number of characters, words, and lines in a file.
#include <stdio.h> 
int main() {
    FILE *file;
    char ch;
    int character = 0, word = 0, line = 0;
    int inWord = 0; 

    file = fopen("hello.txt", "r");

    while ((ch = fgetc(file)) != EOF) {
        character++;

        if (ch == '\n') {
            line++; 
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') { 
            if (inWord) {
                word++;  
                inWord = 0;  
            }
        } else {
            inWord = 1;  
        }
    }

    if (character > 0 && ch != '\n') {
        line++;
    }

    fclose(file);

    printf("Number of characters: %d\n", character);
    printf("Number of words: %d\n", word);
    printf("Number of lines: %d\n", line);

    return 0;
}
