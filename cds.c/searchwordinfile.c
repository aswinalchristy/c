#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char searchWord[] = "Java";
    char word[100];
    int found = 0;

    while (fscanf(fp, "%s", word) == 1) {
        if (strcmp(word, searchWord) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    if (found) {
        printf("Word Found\n");
    } else {
        printf("Word Not Found\n");
    }

    return 0;
}