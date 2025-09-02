#include <iostream>

int LinearSum(int A[], int n) {
    if (n == 1) return A[0];
    else return LinearSum(A, n - 1) + A[n - 1];
}