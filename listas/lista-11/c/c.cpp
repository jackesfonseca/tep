#include <iostream>

using namespace std;

void solve(string S)
{
    if(S=="SUN")
    {
        cout << 7 << endl;
        return;
    }
    else if(S=="MON")
    {
        cout << 6 << endl;
        return;
    }
    else if(S=="TUE")
    {
        cout << 5 << endl;
        return;
    }
    else if(S=="WED")
    {
        cout << 4 << endl;
        return;
    }
    else if(S=="THU")
    {
        cout << 3 << endl;
        return;
    }
    else if(S=="FRI")
    {
        cout << 2 << endl;
        return;
    }
    else if(S=="SAT")
    {
        cout << 1 << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);

    string S;

    cin >> S;

    solve(S);

    return 0;
}