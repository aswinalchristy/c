//Basic sentinel pattern
#include<stdio.h>
int main(){


int input;

while (1) { // 1. Run forever
    printf("Enter a number (-1 to quit): ");
    scanf("%d", &input);

    if (input == -1) { // 2. Sentinel check
        printf("Goodbye!\n");
        break; // 3. Exit the loop
    }

    printf("You entered: %d\n", input);
}
}