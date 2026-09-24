//Input two floating-point numbers and print their product.

#include<stdio.h>

int main()
{
    float a,b,product;
    printf("enter the value of a & b\n");
    scanf("%f %f",&a,&b);
    product=a*b;
    printf("the product is: %.2f",product);

    return 0;
}


