/*Write a program that takes a positive integer $N$ from the user and calculates the sum of all numbers from $1$ to $N$ using a for loop.*/

#include<stdio.h>
int main(){
    int sum=0;
    int n;

    printf("enter the number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is %d\n",sum);
    return 0;
}