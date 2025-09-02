#include <iostream>
using namespace std;

// 보조 함수: (F(n), F(n-1)) 반환
pair<long long, long long> fibHelper(int k) {
    if (k == 0) return { 0, 0 };
    if (k == 1) return { 1, 0 };

    auto prev = fibHelper(k - 1); // 선형 재귀
    long long fk = prev.first + prev.second; // F(k) = F(k-1) + F(k-2)
    long long fk_1 = prev.first;               // F(k-1)

    return { fk, fk_1 };
}

long long fib(int k) {
    return fibHelper(k).first;
}