#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    int num, largest, smallest;

    if (fscanf(fp, "%d", &num) == 1) {
        largest = smallest = num;
        while (fscanf(fp, "%d", &num) == 1) {
            if (num > largest) largest = num;
            if (num < smallest) smallest = num;
        }
        printf("Largest = %d\n", largest);
        printf("Smallest = %d\n", smallest);
    } else {
        printf("File contains no integers.\n");
    }

    fclose(fp);
    return 0;
}