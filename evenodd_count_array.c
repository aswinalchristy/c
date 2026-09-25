//count of even and odd;

#include<stdio.h>

int main(){
    int arr[100];
    int n;
    int odd=0;
    int even=0;

    printf("enter the size of the array");
    scanf("%d",&n);

    printf("enter the array elements");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        if(arr[i]%2!=0){
            odd++;
        }
    }
    printf("even count = %d\n",even);
    printf("odd count = %d",odd);

}