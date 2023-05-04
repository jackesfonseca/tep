#include <iostream>

using namespace std;

int solve(int a, int b, int c, int d)
{
    if(abs(a - c) <= d)
        return 1;
    else
    {
        if(abs(a - b) <= d)
        {    
            if(abs(b - c) <= d)
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(solve(a, b, c , d) == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}