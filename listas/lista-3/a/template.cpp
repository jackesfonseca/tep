#include <iostream>
#include <cmath>

using namespace std;

void solve(int A, int B, int C)
{
    double X1, X2, delta;

    delta = (B*B) - 4*A*C;

    X = ((- B) + sqrt(delta)) / (2*A);
}

int main()
{
    ios::sync_with_stdio(false);

    int A, B, C;

    cin >> A >> B >> C;

    solve(A, B, C);

    return 0;
}