//odd number count from1 to N

#include<stdio.h>
int main(){
    int n,count=0;

    printf("Enter the N value");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            count++;
        }
    }
    printf("There are %d odd numbers between 1 and %d",count,n);
    return 0;
}