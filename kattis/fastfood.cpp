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
        vector<vector<int>> p;
        int s[m];
        for(int j=0; j<n;++j){
            p.push_back(vector<int>());
            int k;
            cin>>k;
            for(int y=0; y<=k;++y){
                int tmp;
                cin>>tmp;
                p[j].push_back(tmp);
            }
        }
        for(int j=0; j<m;++j){
            cin>>s[j];
        }
        int total=0;
        while(true){
            bool redeemed=false;
            for(int j=0; j<n;++j){
                int y;
                for(y=0; y<p[j].size()-1;++y){
                    if(s[p[j][y]-1]<1){
                        break;
                    }
                }
                if(y==p[j].size()-1){
                    redeemed=true;
                    total+=p[j][p[j].size()-1];
                    for(y=0; y<p[j].size()-1;++y){
                        s[p[j][y]-1]--;
                    }
                }
            }
            if(!redeemed){
                break;
            }
        }
        cout<<total<<'\n';
    }
    return 0;
}

