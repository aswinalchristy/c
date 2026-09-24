/*Problem 25: Factorial of a NumberProblem Statement:Write a C program using a while loop that asks the user for a positive integer $N$, calculates its factorial ($N!$), and prints the total result*/

#include<stdio.h>
int main(){
    int i=1;
    int n;
    int fact=1;
    printf("enter the N value");
    scanf("%d",&n);
    while(i<=n){
        fact=fact*i;
        
        i++;

    }
    printf("%d",fact);
    return 0;
}