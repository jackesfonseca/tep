/*
Não está lendo valores grandes
*/

#include <iostream>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);

    long long n, ans=0;

    cin >> n;

    if(n%2)
        ans-=((n+1)/2);
    else
        ans+=(n/2);

    cout << ans << endl;

    return 0;
}