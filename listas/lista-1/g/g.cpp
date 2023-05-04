#include <iostream>

using namespace std;

int solve(int *s)
{
    int cont = 0, i, j;

    for(i=1; i<4; i++)
    {
        for(j=0; j<i; j++)
        {
            if(s[j] == s[i])
                break;
        }
        if(i == j)
            cont++;
    }
    return (4-cont)-1;
}

int main()
{
    ios::sync_with_stdio(false);

    int *s = new int[4];

    for(int i=0; i<4; i++)
        cin >> s[i];

    cout << solve(s) << endl;

    return 0;
}