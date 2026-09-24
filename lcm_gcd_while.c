/*Combining Both into Problem 39 (LCM + Modern GCD)You 
can use either GCD logic to find the Least Common Multiple (LCM).
Try combining your subtraction GCD (or the modulo version) with the mathematical formula $\text{LCM} = \frac{a \times b}{\text{GCD}(a, b)}$ in VS Code:
*/
#include<stdio.h>

int main(){
    int a,b,lcm,gcd,x,y;

    printf("Enter the value of a & b ");
    scanf("%d %d",&a, &b);

    x=a;
    y=b;

    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    
    gcd=a;
    lcm=(x*y)/gcd;

    printf("gcd =%d\n",gcd);
    printf("Lcm =%d\n",lcm);

    return 0;
}