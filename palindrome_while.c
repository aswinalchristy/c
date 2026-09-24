/*Here is Problem 29 for your practice!Problem 29: Check if a Number is a PalindromeProblem Statement:Write a C program using a while loop that asks the user for a positive integer $N$ and checks whether it is a Palindrome. A palindrome is a number that reads the same backward as forward (e.g., 121, 1331, 4554).(Example: If the user enters 121, print 121 is a Palindrome. If the user enters 123, print 123 is not a Palindrome.)*/
//palindrome checker program
#include<stdio.h>
int main(){
    int n,orig_n;
    int rev=0;
    int dig;


    printf("enter the N digit");
    scanf("%d",&n);

    orig_n=n;

    while(n>0){
        dig=n%10;
        rev=(rev*10)+dig;
        n=n/10;
    }
    if(orig_n==rev){
            printf("the number %d is palindrome\n",orig_n);

        }else{
            printf("the number %d is not a palindrome",orig_n);
        }
    return 0;


}