//Take a 3-digit number from the user and print the sum of its individual digits.

/*#include<stdio.h>
int main(){
    int num,a,b,c,sum;
    printf("enter the 3 digit number\n");
    scanf("%d",&num);
    
    a=num%10;
    num=num/10;
    b=num%10;
    c=num/10;

    sum=a+b+c;
    printf("the sum of 3 digit num is: %d",sum);
    return 0;
}*/

#include<stdio.h>
int main(){
    int num,a,b,c,d,sum;
    printf("enter the 4 digit number\n");
    scanf("%d",&num);

    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;

    
     sum=a+b+c+d;
    printf("the sum of 4 digit num is: %d",sum);
    return 0;
}