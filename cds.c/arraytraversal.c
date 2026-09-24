#include <stdio.h>

int main() {
    int n;
    
    // Read array size
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    int arr[n];
    
    // Read 'n' elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print elements separated by a space
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
    
    // Force terminal output display
    fflush(stdout);
    
    return 0;
}