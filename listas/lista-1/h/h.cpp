#include <iostream>
#include <map>

using namespace std;

int solve(string name)
{
    map<char, int> count;

    for(int i=0; i<name.size(); i++)
    {
        count[name[i]]++;
    }

    return count.size();
}

int main()
{
    ios::sync_with_stdio(false);

    string name;

    cin >> name;

    if(solve(name)%2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}