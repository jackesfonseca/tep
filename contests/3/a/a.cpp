#include <iostream>

using namespace std;

int solve(int A, int B, int C)
{
    int X=C;

    do
    {
        if(X >= A && X <= B)
            return X;

        X *= 2;
    } while (X<=B);

    return -1;
    
}

int main()
{
    ios::sync_with_stdio(false);

    int A, B, C;
    int ans;
    
    cin >> A >> B >> C;


    ans = solve(A, B, C);

    cout << ans << endl;

    return 0;
}