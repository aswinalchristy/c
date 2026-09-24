//Ask for a temperature in Celsius and convert it to Fahrenheit ($F = (C \times 9/5) + 32$).

#include<stdio.h>
int main()
{
    float farenheit,celsius;
    printf("enter the degree celsius: \n");
    scanf("%f",&celsius);
    farenheit=(celsius*9.0/5.0+32);
    printf("The farenheit is: %.2f",farenheit);

    return 0;

}