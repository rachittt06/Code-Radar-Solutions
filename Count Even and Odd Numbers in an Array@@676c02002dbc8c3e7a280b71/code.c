#include <stdio.h>

int main() {
    int N, i, evenCount = 0, oddCount = 0;

    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N]; // Declare an array of size N

    // Read the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        // Check if the number is even or odd
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output the count of even and odd numbers
    printf("%d %d\n", evenCount, oddCount);

    return 0;
}