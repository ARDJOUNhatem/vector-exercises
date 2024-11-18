#include <stdio.h>

// Function to add two vectors
void vector_addition(int A[], int B[], int C[], int n) {
    for (int i = 0; i < n; i++) {
        C[i] = A[i] + B[i]; // Add elements
    }
}

int main() {
    int A[] = {1, 2, 3}; // Vector A
    int B[] = {4, 5, 6}; // Vector B
    int C[3]; // Resultant vector
    vector_addition(A, B, C, 3); // Call the function
    printf("Sum of vectors: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", C[i]); // Print result
    }
    printf("\n");
    return 0;
}