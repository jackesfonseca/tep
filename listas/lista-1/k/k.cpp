#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    string l;
    stack <char> s;
    vector<char> v;

    cin >> l;

    for(long long i=0;i<l.size();i++)
    {
        if(l[i]!='B')
            s.push(l[i]);
        else
        {
            if(!s.empty())
                s.pop();
        }
    }
    
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }

    reverse(v.begin(),v.end());

    /*
    range loop with auto declaration
    */
    for(auto z : v)
        cout << z;

    cout << endl;

    return 0;
}
