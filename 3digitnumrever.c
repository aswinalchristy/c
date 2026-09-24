//Take a 3-digit number from the user (e.g., 123) and print its reverse (e.g., 321).


#include<stdio.h>
int main(){
    int num,a,b,c,rev;
    printf("enter the 3 digit number\n");
    scanf("%d",&num);
    
    c=num%10;
    num=num/10;
    b=num%10;
    a=num/10;

    rev=(c*100+b*10+a);
    printf("the reverse of 3 digit num is: %d",rev);
    return 0;
}