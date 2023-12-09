#include <stdio.h>

int main() {
    int n, i, evenSum = 0, oddSum = 0;

    // Input: Number of terms
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of even and odd numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;  // Add even numbers to evenSum
        } else {
            oddSum += i;   // Add odd numbers to oddSum
        }
    }

    // Output: Sum of even and odd numbers
    printf("Sum of even numbers up to %d terms: %d\n", n, evenSum);
    printf("Sum of odd numbers up to %d terms: %d\n", n, oddSum);

    return 0;
}

