#include <stdio.h>

// Function to compute the cross product of two 3D vectors
void cross_product(int A[], int B[], int C[]) {
    C[0] = A[1] * B[2] - A[2] * B[1]; // i-component
    C[1] = A[2] * B[0] - A[0] * B[2]; // j-component
    C[2] = A[0] * B[1] - A[1] * B[0]; // k-component
}

int main() {
    int A[] = {1, 2, 3}; // Vector A
    int B[] = {4, 5, 6}; // Vector B
    int C[3]; // Resultant vector
    cross_product(A, B, C); // Call the function
    printf("Cross product: (%d, %d, %d)\n", C[0], C[1], C[2]); // Print result
    return 0;
}