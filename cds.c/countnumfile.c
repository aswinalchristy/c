#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    int lines = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    // Account for the last line if file doesn't end with a newline
    fclose(fp);
    printf("Number of Lines = %d\n", lines);
    return 0;
}