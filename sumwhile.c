/*Problem 23: Sum of First N Natural NumbersProblem Statement:Write a C program using a while loop that asks the user for a positive integer $N$, calculates the sum of all numbers from $1$ to $N$, and prints the total result.*/

#include<stdio.h>
int main(){
    int sum=0;
    int n;
    int i=1;
    printf("enter the N value:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("The sum of N is: %d",sum);
    return 0;
}