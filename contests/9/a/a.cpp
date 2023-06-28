#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string S;
    
    cin >> N; 
    cin >> S;  

    string result;
    for (char ch : S) {
        result += string(2, ch);  
    }

    cout << result << endl;

    return 0;
}