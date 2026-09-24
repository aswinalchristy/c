//(Take three integers a, b, and c as input and print the largest one.)

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a b and c");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c){
        printf("the largest num is : %d",a);
    }else if(b>=a && b>=c){
        printf("the largest num is : %d",b);
    }else{
        printf("the largest num is : %d",c);
    }
    return 0;
}