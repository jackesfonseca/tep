#include <iostream>

using namespace std;

int main() {
    int A[64];
    for (int i = 0; i < 64; ++i) {
        cin >> A[i]; 
    }

    long long result = 0;
    long long powerOfTwo = 1;
    for (int i = 0; i < 64; ++i) {
        result += A[i] * powerOfTwo; 
        powerOfTwo *= 2; 
    }

    cout << result << endl;

    return 0;
}