/*Write a program that takes a positive integer $N$ from the user and checks whether it is a Prime Number using a for loop.*/

#include<stdio.h>
int main(){
    int n;
    int isprime=1;

    printf("Enter the N value");
    scanf("%d",&n);

    if(n<=0){
        isprime=0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime==1)
    {
        printf("%d is prime number",n);
    }else{
        printf("%d is not prime number",n);
    }
}