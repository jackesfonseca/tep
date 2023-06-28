#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(3 * N);
    for (int i = 0; i < 3 * N; ++i) {
        cin >> A[i];  // Input the sequence A
    }

    unordered_map<int, vector<int>> occurrences;
    for (int i = 0; i < 3 * N; ++i) {
        occurrences[A[i]].push_back(i);  // Store the occurrences of each value
    }

    sort(A.begin(), A.end(), [&occurrences](int a, int b) {
        return occurrences[a][1] < occurrences[b][1];  // Sort based on the middle occurrence indices
    });

    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";  // Print the sorted sequence
    }
    cout << endl;

    return 0;
}