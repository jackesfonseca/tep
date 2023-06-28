#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long A, N, sum=0;

    cin >> N;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<7; j++)
        {
            cin >> A;
            sum+=A;
        }
        cout << sum << " ";
        sum=0;
    }
    cout << endl;

    return 0;
}