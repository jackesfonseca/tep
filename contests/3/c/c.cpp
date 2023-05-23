#include <iostream>
#include <vector>

using namespace std;

long solve(vector<long> A, long X) {
    // Compute the sum of the sequence A
    long total = 0;
    for (long i = 0; i < A.size(); i++) {
        total += A[i];
    }
    
    // Multiply the sum by 10^100 to obtain the concatenation B
    vector<long> B(10e7 / A.size() + 1, total);
    long excess = (long)10e7 % A.size();
    for (long i = 0; i < excess; i++) {
        B[i] = total;
    }
    
    // Binary search for the minimum value of k such that the sum of the first k terms of B exceeds X
    long left = 0, right = B.size();
    while (left < right) {
        long mid = (left + right) / 2;
        long sum = 0;
        for (long i = 0; i < mid + 1; i++) {
            sum += B[i];
        }
        if (sum > X) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }
    
    // Return the minimum value of k
    return left + 1;
}

int main() {

    ios::sync_with_stdio(false);

    long N;
    long X;

    cin >> N;

    vector<long> A;

    for(long i=0; i<N; i++)
        cin >> A[i];

    cin >> X;

    cout << solve(A, X) << endl;

    return 0;
}