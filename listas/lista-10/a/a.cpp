#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, sum = 0;
    vector<int> v;

    for (int i = 0; i < 3; i++)
    {
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for (int i = 1; i < 3; i++)
    {
        sum += abs(v[i] - v[i - 1]);
    }

    cout << sum << std::endl;

    return 0;
}
