#include <stdio.h>

int main() {
    FILE *fp = fopen("message.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char word[100];
    int wordCount = 0;

    while (fscanf(fp, "%s", word) == 1) {
        wordCount++;
    }

    fclose(fp);
    printf("Number of Words = %d\n", wordCount);
    return 0;
}