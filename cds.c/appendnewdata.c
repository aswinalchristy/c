#include <stdio.h>

int main() {
    // Mode "a" appends data to the end of the file
    FILE *fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "\n103 Kumar IT");
    fclose(fp);

    printf("Data appended successfully.\n");
    return 0;
}