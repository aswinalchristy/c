#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char target;
    
    scanf("%s", str);
    // Read the target character (space before %c skips trailing newline)
    scanf(" %c", &target);
    
    int found = 0;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] == target) {
            printf("Character found at index %d\n", i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Character not found\n");
    }
    
    return 0;
}