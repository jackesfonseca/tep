#include <iostream>

using namespace std;

int main() {

    int n, k;
    unsigned long long sum, have;

    while (cin >>  n >> k) {
        sum = n, have = n;
        while (have >= k) {
            sum += have / k;
            have = have / k + have % k;
        }
        cout << sum << endl;
    }
    return 0;
}