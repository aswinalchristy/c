/*Here is Problem 28 for your practice!Problem 28: Reverse a NumberProblem Statement:Write a C program using a while loop that asks the user for a positive integer $N$, reverses its digits, and prints the reversed number.(Example: If the user enters 425, the output should be 524. If the user enters 1200, the output should be 21.)*/

#include <stdio.h>

int main() {
    int n;
    int reverse = 0;
    int digit;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n>0){
        digit=n%10;
        reverse=(reverse*10)+digit;
        n=n/10;
    }


    
    printf("The reversed number is: %d\n", reverse);
    return 0;
}