#include<bits/stdc++.h>
  
using namespace std;
  
int main(){
    ios::sync_with_stdio(false);
  
    long long n, k, x=0, value;
  
    vector<long long>a;
  
    cin>>n>>k;
  
  
    for(long long i = 0; i<n; i++)
    {
        cin>>value;
        a.push_back(value);
    }
  
    int z = 0, o = 0;
  
    for(int i=60; i>=0; i--)
    {
        auto mask = 1LL<<i;
  
        z = 0, o = 0;
  
        for(auto aux: a){
            if(aux & mask)
                o++;
            else
                z++;
        }
  
        if((z > o) and ((x | mask) <= k))
            x |=mask;
    }
    long long soma = 0;
    for(int i = 0; i<n; i++){
        long long x_result = x^a[i];
        soma+=x_result;
    }
  
    cout<<soma<<endl;
}