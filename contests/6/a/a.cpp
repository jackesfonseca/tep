#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int ans=1;
    long n;
    string str1, str2;

    cin >> n;

    cin >> str1 >> str2;

    for(int i=0; i<n; i++)
    {
        if(str1[i] != str2[i])
        {
            if(str1[i]!='1' && str1[i]!='l' && str1[i]!='0' && str1[i]!='o')
                ans=0;
            else if ((str1[i]=='1' && str2[i]!='l'))
                ans=0;
            else if((str2[i]=='1' && str1[i]!='l'))
                ans=0;
            else if((str1[i]=='0' && str2[i]!='o'))
                ans=0;
            else if((str2[i]=='0' && str1[i]!='o'))
                ans=0;
        }
    }

    if(ans == 0)
        cout << "No" << endl;
    else    
        cout << "Yes" << endl;

    return 0;
}