#include <stdio.h>

// Function to compute the dot product of two vectors
int dot_product(int A[], int B[], int n) {
    int product = 0; // Initialize result
    for (int i = 0; i < n; i++) {
        product += A[i] * B[i]; // Sum the products
    }
    return product; // Return result
}

int main() {
    int A[] = {1, 2, 3}; // Vector A
    int B[] = {4, 5, 6}; // Vector B
    printf("Dot product: %d\n", dot_product(A, B, 3)); // Print result
    return 0;
}