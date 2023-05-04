#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        string s = "";
        for (int j = 1; j <= m; j++)
            s += to_string(j);

        vector<int> ch(10, 0);  // initialize ch vector with 10 zeros

        for (char c : s) {
            ch[c - '0']++;  // increment the count of the corresponding digit
        }

        for (int j = 0; j <= 9; j++) {
            cout << ch[j];
            if (j != 9)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}