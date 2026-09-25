#include <stdio.h>

int main() {
    int n, target;
    int arr[100];
    int foundIndex = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index %d\n", foundIndex);
    } else {
        printf("Element not found\n");
    }

    return 0;
}