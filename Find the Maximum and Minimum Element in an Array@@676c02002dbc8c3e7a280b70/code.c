#include <stdio.h>
#include <limits.h>  // For INT_MAX and INT_MIN

int main() {
    int n;

    // Read the number of elements
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize min and max values
    int min = INT_MAX;
    int max = INT_MIN;

    // Find min and max
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Print min and max on the same line
    printf("%d %d\n", min, max);

    return 0;
}