/*Problem 20: Even or Odd using Ternary
Problem Statement: Take an integer from the user and check whether it is Even or Odd using a single line ternary operator expression.*/

/*#include<stdio.h>
int main(){
    int a;
    char *num;
    
    printf("enter the value of a");
    scanf("%d",&a);
    num=(a%2==0)?"even":"odd";
    printf("the number is %s",num);
    return 0;
}*/

#include<stdio.h>
int main(){
    int a;
    char *num;
    
    printf("enter the value of a\n");
    scanf("%d",&a);

    printf("the number is %s\n",(a%2==0)?"even":"odd");

    return 0;
}