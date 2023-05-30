#include <iostream>

using namespace std;

long long ceils(long long x, long long y)
{
    long long ans = x/y;
    if(x%y)ans++;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);

    long long n, x, y;

    cin >> n;
    cin >> x >> y;

    long long a=x, b=y; 

    for(long long i=1; i<n; i++)
    {
        cin >> x >> y;
        long long num=max(ceils(a,x), ceils(b,y));
        a=x*num;
        b=y*num;
    }

    cout << a+b << endl;

    return 0;
}