#include <stdio.h>

int main() {
    FILE *fp = fopen("marks.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char name[50];
    int marks;

    while (fscanf(fp, "%s %d", name, &marks) == 2) {
        if (marks >= 50) {
            printf("%s %d\n", name, marks);
        }
    }

    fclose(fp);
    return 0;
}