/*
Problem 31: Find the GCD (Greatest Common Divisor) of Two Numbers

Problem Statement:
Write a C program using a while loop that takes two positive integers from the user and calculates their GCD (also known as HCF—Highest Common Factor) using subtraction
*/

#include<stdio.h>

int main(){
    int a, b;
    int orig_a, orig_b;

    printf("enter the value of a and b\n");
    scanf("%d %d", &a, &b);

    orig_a=a;//its only used for diplaying output like The GCD of the number 81 and 153 is 9
                // if we didnot put orig mean then the output will be the  gcd of the number 0 and 0 is 9
    orig_b=b;

    while(a!=b){
        if(a>b){
            a=a-b;
           
        }else{
            b=b-a;
            
        }
    }
    printf("The GCD of the numbers %d and %d is %d", orig_a, orig_b, a);

    return 0;


}


/*
Problem 31: Find the GCD (Greatest Common Divisor) of Two Numbers
Algorithm: Euclidean Algorithm by Subtraction (without backup variables)
*/

/*#include <stdio.h>

int main() {
    int a, b;

    printf("enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    printf("The GCD is %d\n", a);

    return 0;
}*/