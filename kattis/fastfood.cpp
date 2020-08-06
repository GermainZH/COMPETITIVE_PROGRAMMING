#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t;++i){
        int n,m;
        cin>>n>>m;
        vector<int> prizes[n];
        int prizeV[n];
        int stickers[m];
        for(int y=0; y<n;++y){
            int k;
            cin>>k;
            for(int j=0; j<k;++j){
                int s;
                cin>>s;
                prizes[y].push_back(s);
            }
            cin>>prizeV[y];
        }
        for(int y=0; y<m;++y){
            cin>>stickers[y];
        }
    }
    return 0;
}

