/*Now, let's write it using a for loop: Once you see how individual indices work (arr[0], arr[1], arr[2]), we replace the repeated lines with a simple for loop using i*/

#include<stdio.h>
int main(){
    int arr[3];

    for (int i=0;i<3;i++){
        printf("enter the number for index [%d]\n",i);

        scanf("%d",&arr[i]);
    }

    printf("Your array contains\n");
    for(int i=0;i<3;i++){
        printf("the element at index [%d] is %d\n",i,arr[i]);
    }
    return 0;
}
