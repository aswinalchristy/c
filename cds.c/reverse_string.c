#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}