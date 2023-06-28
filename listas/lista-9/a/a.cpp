#include <iostream>

using namespace std;

bool solve(long N, long A)
{
    if(N < 500)
    {
        if(A > N)
            return true;
        return false;
    }
    else
    {
        if(N%500 <= A)
            return true;
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);

    long N, A;

    cin >> N;
    cin >> A;

    if(solve(N, A))
        cout << "Yes" << endl;
    else    
        cout << "No" << endl;

    return 0;
}