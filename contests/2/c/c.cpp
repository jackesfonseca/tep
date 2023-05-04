#include <iostream>
#include <vector>

using namespace std;

int H, W;

int mCresc(char **C, int l, int c)
{
    int count=0;

    while(l < H)
    {
        if(C[l+1][c+1] == '#')
            count+=1;
        l++;
        c++;
    }
        

    return count;

}

int mDecresc(char **C, int l, int c)
{
    int count=0;

    while(l >= 0)
    {
        if(C[l+1][c+1] == '#')
            count+=1;
        l--;
        c--;
    }
        

    return count;
}

int main()
{
    ios::sync_with_stdio(false);

    int l, c;
    int count=0;
    int cresc, decresc;

    cin >> H >> W;

    char** C = new char*[H];
    for (int i = 0; i < H; i++) {
        C[i] = new char[W];
    }
    
    vector<int> S(H, 0);

    for(int i=0; i<H; i++)
    {
        for(int j=0; j<W; j++)
        {
            cin >> C[i][j];
        }
    }

    //possição possível de ter um cruzamento
    for(int i=1; i<H-1; i++)
    {
        for(int j=1; j<W-1; j++)
        {
            //verifica se tem #
            if(C[i][j] == '#')
            {
                //verifica diagonal
                if(C[i+1][j+1] == '#')
                { 
                    cresc = mCresc(C, i+1, j+1);
                    decresc = mDecresc(C, i-1, j-1);

                    if(cresc == decresc)
                        S[i+1] = cresc;
                }
            }

            cout << C[i][j];
        }

        //cout << endl;
    }
    /*
    4X5
    0,0 0,1 0,2 0,3 0,4
    1,0 1,1 1,2 1,3 1,4
    2,0 2,1 2,2 2,3 2,4
    3,0 3,1 3,2 3,3 3,4
    
    */

    for(int i=0; i<S.size(); i++)
    {
        cout << S[i] << ' ';
    }

    return 0;
}