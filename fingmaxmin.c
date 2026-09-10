//Take two integers from the user and print which one is greater, or if they are equal.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);

    if(a>b){
        printf(" a is greater that b");
    }else if(a<b){
        printf("a is less than b");
    }else{
        printf("the numbers are equal");
    }
    return 0;


}