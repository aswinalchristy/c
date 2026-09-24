//Problem 9: Calculate simple interest given Principal ($P$), Rate ($R$), and Time ($T$) ($\text{SI} = (P \times R \times T) / 100$).

//#include<stdio.h>

/*int main()
{
    float prin,rate,time,simint;
    printf("enter the values of principle,raate,time:");
    scanf("%f %f %f",&prin,&rate,&time);
    simint=(prin*rate*time)/100.0;
    printf("The simple interest is :  %.2f",simint);
    return 0;
}*/

#include<stdio.h>
int main(){
    float p,r,t,si;
    float hours,min,sec;

    printf("enter the values of principle,rate\n");
    scanf("%f %f",&p,&r);


    printf("enter the time (in hours,minutes,seconds)\n");
    scanf("%f %f %f",&hours,&min,&sec);

    float tot_sec=(hours*3600.0)+(min*60.0)+sec;
    t=tot_sec/31536000.0;


    si=(p*r*t)/100.0;
    printf("the simple interest is: %.2f",si);
    return 0;



}