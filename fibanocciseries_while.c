/*Problem 41: Fibonacci Series up to $N$ TermsThe Goal: Generate the Fibonacci sequence where each term is the sum of the preceding two terms, starting from 0 and 1 (e.g., for $N = 7 \rightarrow \mathbf{0, 1, 1, 2, 3, 5, 8}$).*/

#include<stdio.h>

int main(){
    int a=0,b=1,nextterm,n;
    int i=1;

    printf("enter the series number");
    scanf("%d",&n);

    printf("Fibanocci Series\n");

    while(i<=n){
        printf("%d",a);
    
    if(i<n){
        printf( " , ");

    }
    nextterm=a+b;
    
    a=b;
    b=nextterm;

    i++;
}

    printf("\n");
    return 0;
}
