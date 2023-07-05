#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (char& c : s) {
        int aux = c - 'A';
        aux = (aux + n) % 26;
        c = 'A' + aux;
    }

    cout << s << endl;

    return 0;
}
