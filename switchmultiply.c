//Problem 16: Simple Calculator
//Build a simple calculator that performs addition, subtraction, multiplication, or division based on an operator input.

#include<stdio.h>
int main(){
    int num;
    int a,b,res;
    printf("enter (1-4) choices");
    scanf("%d",&num);
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    switch(num){
        case 1:
        res= a+b;
        printf("%d\n",res);
        break;
        case 2:
        res= a-b;
        printf("%d\n",res);
        break;
        case 3:
        res= a*b;
        printf("%d\n",res);
        break;
        case 4:
        if(b!=0){
            res= a/b;
            printf("%d\n",res);
        }else{
            printf("error:division by zero"); 
        }
        break;
        default:
        printf("Not valid!");
    }

    return 0;

}