#include <iostream>
#include "Flower.h"
using namespace std;


void printArray(int**, int, int);

int main() {

    // R-1.6
    //double* dp[10];   

    //for (int i = 0; i < 10; i++) {
    //    dp[i] = new double(0.0);   
    //}
 
    //for (int i = 0; i < 10; i++) cout << *dp[i] << " ";
    // 
    //for (int i = 0; i < 10; i++) delete dp[i];

    //R-1.7
    //int n;
    //cin >> n;
    //int sum = 0;
    //for (int i = 0; i <= n; i++) {
    //    sum += i;
    //}
    //cout << sum << endl;

    //R-1.8
    //int n, m;
    //cout << "n : ";
    //cin >> n;
    //cout << "m : ";
    //cin >> m;
    //if (n % m == 0) {
    //    cout << "true";
    //    return true;
    //}
    //else {
    //    cout << "false";
    //}

    // R-1.9
    //int Array[3][2] = {
    //    {1,2},
    //    {3,4},
    //    {5,6}
    //};

    //int* p[3];
    //for (int i = 0; i < 3; i++) {
    //    p[i] = Array[i];
    //}
    //printArray(p, 3, 2);

    //R-1.11
    //Flower f1("Àå¹Ì²É", 20, 5000);
    //cout << f1 << endl;
    
}

void printArray(int** A, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}