/*Write a program that takes an integer $N$ from the user and prints the first $N$ numbers in the Fibonacci sequence.*/

#include<stdio.h>
int main(){
    int a=0,b=1,nextterm,n;
    
    printf("Enter the series number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d ",a);
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf("\n");
    }
    return 0;
   
   
}