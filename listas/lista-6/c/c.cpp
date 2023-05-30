#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2)
        return false;
        
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    
    return true;
}

int findNextPrime(int x) {
    while (true) {
        if (isPrime(x))
            return x;
        x++;
    }
}

int main() {
    int x;

    cin >> x;
    
    cout << findNextPrime(x) << endl;
    
    return 0;
}
