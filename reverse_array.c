//reversing an array


#include<stdio.h>

int main(){
    int arr[100];
    int n;

    printf("enter the size of the array");
    scanf("%d",&n);

    printf("enter the array elements");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }


}
    