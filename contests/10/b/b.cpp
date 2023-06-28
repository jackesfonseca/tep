#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

bool solve(vector<string> &S, long N)
{
    string T;
    string P;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(j!=i)
            {
                T = S[i] + S[j];
                P = T;
                reverse(P.begin(), P.end());
                if(P==T)
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);

    long N;

    cin >> N;

    vector<string> S(N);

    for(int i=0; i<N; i++)
        cin >> S[i];

    if(solve(S, N))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}