//Take an integer from the user and output whether it is POSITIVE, NEGATIVE, or ZERO.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    if(num>0){
        printf("The number is positive"); 
    }else if(num<0){
        printf("The number is negative");
    }else{
        printf("The number is zero");

    }
    return 0;
}