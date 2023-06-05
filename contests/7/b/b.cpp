#include <iostream>

using namespace std;

long long solve(long long N) {
    if (N <= 1e3 - 1) {
        return N;
    } else if (N <= 1e4 - 1) {
        return N / 10 * 10;
    } else if (N <= 1e5 - 1) {
        return N / 100 * 100;
    } else if (N <= 1e6 - 1) {
        return N / 1000 * 1000;
    } else if (N <= 1e7 - 1) {
        return N / 10000 * 10000;
    } else if (N <= 1e8 - 1) {
        return N / 100000 * 100000;
    } else if (N <= 1e9 - 1) {
        return N / 1000000 * 1000000;
    }

    return 0;
}

int main() {
    long long N;

    cin >> N;

    long long approximation = solve(N);
    cout << approximation << endl;

    return 0;
}