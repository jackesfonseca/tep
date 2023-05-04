#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, A, B, C, sum=0;

    cin >> N >> A >> B;

    sum = A+B;

    for(int i=0; i<N; i++)
    {
        cin >> C;

        if(C == sum)
            cout << i+1 << endl;
    }

    return 0;
}