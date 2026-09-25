#include <stdio.h>

int main() {
    char str[100];
    char target;
    int count = 0;

    scanf("%s", str);
    scanf(" %c", &target);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%c occurs %d times\n", target, count);

    return 0;
}