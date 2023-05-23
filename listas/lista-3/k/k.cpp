#include <iostream>
#include <math.h>

using namespace std;

void convertToTernary(long N) 
{
    long ternaryDigits[32];  // array to store ternary digits
    long numTernaryDigits = 0;

    // convert decimal to ternary
    do {
        ternaryDigits[numTernaryDigits++] = N % 3;
        N /= 3;
    } while (N > 0);

    // print ternary digits in reverse order
    for (long i = numTernaryDigits - 1; i >= 0; i--) {
        cout << ternaryDigits[i];
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);

    long N;

    cin >> N;

    while(N >= 0)
    {
        convertToTernary(N);
        cin >> N;
    }

    return 0;
}