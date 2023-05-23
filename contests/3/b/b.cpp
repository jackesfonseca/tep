#include <iostream>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(false);

    string K;
    string A, B;

    cin >> K;
    cin >> A >> B;

    long intA = stoi(A, nullptr, stoi(K));
    long intB = stoi(B, nullptr, stoi(K));

    cout << intA * intB << endl;

    return 0;
}