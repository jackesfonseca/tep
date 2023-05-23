#include <iostream>
using namespace std;

int main() {

    long A; // Enemy's initial stamina
    long B;  // Stamina reduced by each attack

    cin >> A >> B;

    long attacks = (A + B - 1) / B;  // Minimum number of attacks
    
    cout << attacks << endl;
    return 0;
}
