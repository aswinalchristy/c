/*Problem 21: Simple Banking System Menu
Problem Statement:

Write a C program that simulates a simple banking system. Start the user with an initial balance of ₹1,000. Display a menu with the following choices and use a switch-case statement to handle the user's selection:*/

#include <stdio.h>
int main()
{
    float bal=1000.0;
    float wd,dep;
    int choice;

    printf("enter the choices from (1-4)");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("the balance is: %.2f",bal);
        break;
        case 2:
        printf("enter the amount u deposit\n");
        scanf(" %f",&dep);
        bal=bal+dep;
        printf("the bal is : %.2f",bal);
        break;
        case 3:
        printf("enter the withdraw amount");
        scanf(" %f",&wd);
        if(bal<wd){
            printf("Insufficient Balance");

        }else{
            bal=bal-wd;
            
            printf("Balance : %f",bal);

        }
        break;
        case 4:
        printf("Exit");
        break;
        default:
        printf("Invalid choice");

        
    }
    return 0;





}
