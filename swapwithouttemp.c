//Swap the values of two variables without using a third variable.

#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the a & b values:\n");
    scanf("%d %d",&a,&b); //ex) a=5 b=10
    a=a+b; //a=5 + 10 =15
    b=a-b; //b=15 - 10 = 5
    a=a-b; //a=15 - 5 =10 successfully swapped a=10 b=5
    printf("after swapping a=%d b=%d",a,b);
    return 0;




}