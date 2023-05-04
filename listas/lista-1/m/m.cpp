#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long int n, s, ans;

    cin >> n >> s;

    ans=s/n;

    if(s%n != 0)
        ans+=1;
    
    cout << ans << endl;

    return 0;
}