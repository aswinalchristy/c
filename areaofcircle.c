//: Take the radius of a circle as input and calculate its area ($\text{Area} = \pi \times r^2$).

#include<stdio.h>
int main(){
    float radius,area,pi=3.14f;
    printf("enter the radius of the circle:\n");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("The area of the circle is: %.2f",area );
    return 0;
}