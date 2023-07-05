#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> welfare(n);
    for (int i = 0; i < n; ++i) {
        cin >> welfare[i];
    }

    int max_welfare = *max_element(welfare.begin(), welfare.end());
    int total = 0;

    for (int i = 0; i < n; ++i) {
        int diff = max_welfare - welfare[i];
        total += diff;
    }

    cout << total << endl;

    return 0;
}