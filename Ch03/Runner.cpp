// main.cpp
#include "GeneralLinkedList.h"
#include "TicTacToe.h"
#include "DLinkedList.h"
#include "CircularLinkedList.h"

#include <iostream>
using namespace std;

int LinearSum(int[], int);
void ReverseArray(int[], int, int);
void IterativeReverseArray(int[], int, int);
void drawRuler(int nInches, int majorLength);
void transpose_matrix(int** A, int n);
int RecursionSum(int** A, int m);

int main() {
 

    //drawRuler(2,4);
    int A[2][2] = { {1,2},{3,4} };
    int* p[2];
    p[0] = A[0];
    p[1] = A[1];

    int sum = RecursionSum(p,4);

  
}


