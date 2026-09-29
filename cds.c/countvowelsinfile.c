#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    int vowelCount = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    fclose(fp);
    printf("Number of Vowels = %d\n", vowelCount);
    return 0;
}