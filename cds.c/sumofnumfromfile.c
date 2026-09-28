#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    int num, sum = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }

    fclose(fp);
    printf("Sum = %d\n", sum);
    return 0;
}