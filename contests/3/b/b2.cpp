#include <iostream>
#include <math.h>

using namespace std;

int convertToDecimal(int N, int k) {
    int decimal = 0;
    int power = 0;
    
    while (N > 0) {
        int digit = N % 10;
        decimal += digit * pow(k, power);
        N /= 10;
        power++;
    }
    
    return decimal;
}

int main()
{
    ios::sync_with_stdio(false);

    int A, B;
    int a, b, ans, K;

    cin >> K >> A >> B;

    //cout << A[0] << endl;
    a = convertToDecimal(A, K);
    b = convertToDecimal(B, K);

    //cout << a << endl;
    //cout << b << endl;

    cout << a*b << endl;

    return 0;
}