#include <iostream>
#include <vector>

using namespace std;

struct BOX
{
    vector<int> v;
};

int main()
{
    ios::sync_with_stdio(false);

    int N, Q;
    int a, b, c;
    int contHas=0;

    cin >> N;

    BOX box[N+1];

    int has[N+1];

    cin >> Q;

    for(int i=0; i<Q; i++)
    {
        cin >> a;
        //cout << "A:" << a;

        switch (a)
        {
        case 1:
            cin >> b >> c;
            //cout << "C-1: " << (c-1) << endl;
            //cout << "B: " << b << "C: " << c <<endl;
            box[c].v.push_back(b);
            break;
            
        case 2:
            cin >> b;
            //cout << "B: " << b <<endl;
            for(int i=box[b].v.size()-1; i>=0; i--)
                cout << box[b].v[i] << " ";
            cout << endl;
            break;

        case 3:
            cin >> b;
            //cout << "B: " << b <<endl;
            //percorre todas as caixas
            for(int i=0; i<N+1; i++)
            {
                //percorre cada vetor
                for(int j=box[i].v.size()-1; j>=0; j--)
                {
                    if(box[i].v[j] == b)
                    {
                        has[contHas] = i;
                        //cout << "I: " << i << endl;
                        contHas+=1;
                        break;
                    }
                }
            }

            for(int i=0; i<contHas; i++)
            {
                cout << has[i] << " ";
            }

            cout << endl;
            break;
        }
        contHas=0;
    }
    

    return 0;
}