#include <stdio.h>

int main() {
    int n, target;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    
    int low = 0;
    int high = n - 1;
    int foundIndex = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (foundIndex != -1) {
        printf("Element found at index %d\n", foundIndex);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}
