#include <iostream>

using namespace std;
 
int ack(int m, int n)
{
    if (m == 0)
        return n + 1;
        
    else if((m > 0) && (n == 0))
        return ack(m - 1, 1);

    else if((m > 0) && (n > 0))
        return ack(m - 1, ack(m, n - 1));
}
 
int main()
{
    ios::sync_with_stdio(false);
    
    int A, n, m;

    cin >> n >> m;

    //A = ack(n, m);

    cout << A << endl;
    return 0;
}
 