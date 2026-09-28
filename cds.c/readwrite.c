#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], dept[50];
    int roll;

    // Writing to file
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fp, "Name: Arun\nRoll No: 101\nDepartment: CSE\n");
    fclose(fp);

    // Reading from file
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}