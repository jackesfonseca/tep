#include <iostream>
#include <queue>


using namespace std;

int add[30010];
priority_queue<int, vector<int>, greater<int> > Min;
priority_queue<int, vector<int>, less<int> > Max;

int main()
{
    ios::sync_with_stdio(false);

    int m, n, k;
    int oper;
    int cur = 0;


    cin >> k;
    cin >> m >> n;

    for(int i=0; i<k; i++)
    {
        for(int i=0; i<m; i++)
            cin >> add[i];

        for(int  i=0; i<n; i++)
        {
            cin >> oper;
            while(cur < oper)
            {
                Min.push(add[cur]);
                if(!Max.empty() && Max.top() > Min.top())
                {
                    int temp1 = Max.top();
                    int temp2 = Min.top();
                    Max.pop();
                    Min.pop();
                    Max.push(temp2);
                    Min.push(temp1);
                }
            cur++;
            }
            cout << Min.top() << endl;
            Max.push(Min.top());
            Min.pop();
        }
    }

    return 0;
}