#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int t; cin >> t;

    while(t--)
    {
        int a, b; cin >> a >> b;
        int s = abs(a - b);
        if(s % 10 == 0)
            cout << s/10 << endl;
        else
            cout << s/10+1 << endl;
    }
    
    return 0;
}