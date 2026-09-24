#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // %c prints the actual character
    // %d prints the corresponding numeric ASCII value
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;
}
