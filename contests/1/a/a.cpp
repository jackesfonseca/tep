#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N;
    int pass=0; //false 
    string s;

    cin >> N;

    cin >> s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'x'){
            pass = 0; break;
        }
        else{
            if(s[i] == 'o')
                pass = 1;
        }
    }

    if(pass == 0)
        cout << "No" << endl;

    else
        cout << "Yes" << endl;
        
    return 0;
}