#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n & 1){
            cout<<"YES"<<endl;
        }
        else{
            bool ok = false;
            long long div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        ok = true;
                        break;
                    }
                }
            }
            if(ok){
                //cout<<div<<endl;
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}