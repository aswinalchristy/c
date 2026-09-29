#include <stdio.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Source file not found.\n");
        return 1;
    }

    FILE *dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(src);
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("Contents copied successfully.\n");
    return 0;
}