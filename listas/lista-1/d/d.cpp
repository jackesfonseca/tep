#include <iostream>
#include <math.h>

using namespace std;

int main()
{   

    ios::sync_with_stdio(false);
    
    long long l, r;
    int i;
    
    cin >> l >> r;

    for(i=63; i>=0; i--) 
        if((l&(1ll<<i))^(r&(1ll<<i))) break;

    long long max=pow(2,i+1)-1;

    cout << max << endl;
} 
