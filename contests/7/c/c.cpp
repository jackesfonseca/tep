#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N, D, flag=0;

    cin >> N >> D;

    int X[N][2];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<2; j++)
            cin >> X[i][j];
    }

    cout << "a1: " << X[0][0] << " b1: " << X[0][1] << endl << endl;

    cout << "Yes" << endl;

    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N; j++)
        { 
            cout << "a1: " << X[i][0] << " b1: " << X[i][1] << " a2: " << X[j][0] << " b2: " << X[j][1] << endl;
            cout << "resultado: " << ((X[i][0]-X[i][1])*2)+((X[j][0]-X[j][1])*2) << endl;
            if(((X[i][0]-X[i][1])*2)+((X[j][0]-X[j][1])*2) == D)
                flag = 1;
        }
        if(flag == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
        flag = 0;
    }

    return 0;
}