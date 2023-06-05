#include <iostream>

using namespace std;

// Function to check if a number is composite
bool isComposite(long num) {
    if (num < 4) {
        return false;  // Numbers less than 4 are not composite
    }
    for (long i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return true;  // Number has a divisor other than 1 and itself
        }
    }
    return false;  // Number is not composite
}

// Function to find two composite numbers that sum up to n
void findCompositeSum(long n) {
    for (long i = 4; i <= n / 2; i++) {
        if (isComposite(i) && isComposite(n - i)) {
            cout << i << " " << n - i << endl;
            return;
        }
    }
}

int main() {
    long n;

    cin >> n;

    findCompositeSum(n);

    return 0;
}