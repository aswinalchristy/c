/*Problem 19: Find Maximum of Two Numbers
Problem Statement: Take two integers as input from the user and print the larger number using a single line ternary operator expression.
*/

/*#include<stdio.h>
int main(){
    int a,b,max;
    printf("enter the value for a & b\n");
    scanf("%d %d",&a,&b);

    max=(a>b)?a:b;
    printf("the maximum nummber is : %d",max);

    return 0;

}*/

#include<stdio.h>
int main(){
    int a,b,max;
    printf("enter the value for a & b\n");
    scanf("%d %d",&a,&b);

    printf("The maximum number is : %d",(a>b)?a:b);

    return 0;
}