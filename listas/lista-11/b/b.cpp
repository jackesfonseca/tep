#include <iostream>
using namespace std;
    
int main() {
    int n, sizeT; 
    string s, t; 

    cin >> n;
    cin >> s;
    
    t = s;
    sizeT = t.size() / 2;
    t.erase(t.begin() + sizeT, t.end());
    
    (t + t) == s ? cout << "Yes" : cout << "No";
    cout << endl;
}