/* Factorial of a Number (for_factorial.c)Write a program that takes a non-negative integer $N$ from the user and calculates its factorial ($N!$).*/

#include<stdio.h>

int main(){
    int fact=1;
    int n;

    printf("enter the number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of %d",fact);
    return 0;
}