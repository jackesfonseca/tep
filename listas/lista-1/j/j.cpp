#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main(){
    unordered_set<int> set;
    vector<int> save;
    int cd = 0;
    int count = 0;
    int n = 1;
    int m = 1;
    
    while(n > 0 || m > 0){
        count = 0;
        
        cin >> n >> m;
        if(n < 0 || m < 0)
            exit(0);
        if(n == 0 && m == 0)
            break;
        
        if(n > 0){
            for(int i = 0; i < n; i++){
                cin >> cd;
                set.insert(cd);
            }
        }
        
        if(m > 0){
            for(int j = 0; j < m; j++){
                cin >> cd;
                if(set.find(cd) != set.end())
                    count++;
            }
        }
        
        save.push_back(count);
        set.clear();
    }
    
    for(int i = 0; i < save.size(); i++)
        cout << save[i] << endl;
    
    return 0;
}