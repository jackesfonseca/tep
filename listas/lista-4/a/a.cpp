    #include <bits/stdc++.h>
     
    using namespace std;
    
    using ll = long long;
     
    int main(){
        cin.tie(NULL)->sync_with_stdio(false);
        int X;
        cin >> X;
        vector<int> all;
        all.push_back(1);
        int ans = 1;
        for(int i = 2;i <= 31;++i){
            int aux = i * i;
            while(aux <= X){
                ans = max(ans, aux);
                aux *= i;
            }
        }
        cout << ans << endl;
        return 0;
    }