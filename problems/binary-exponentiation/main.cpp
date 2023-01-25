#include<iostream>
#include<cstdio>

using namespace std;

/*
*  https://cp-algorithms.com/algebra/binary-exp.html
*  The goal is to compute A to the power of N with O(logn) complexity
*  We assume that N >= 0 and A is >= 0
**/

long long binary_exponentiation(long long A, int N) {
    long long res = 1;

    while(N) {
        if(N & 1) {
            res *= A;
        }
        N >>= 1;
        A *= A;
    }

    return res;
}

int main() {
    int A, N;
    cin >> A >> N;

    long long res = binary_exponentiation(A, N);
    cout << res << "\n";

    return 0;
}