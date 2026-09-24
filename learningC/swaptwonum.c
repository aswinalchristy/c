//Swap the values of two variables using a third temporary variable.

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the num of a & b");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping: a=%d & b=%d",a,b);
    return 0;

    
}