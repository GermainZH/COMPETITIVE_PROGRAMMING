#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,b,h,w;
    while(cin>>n>>b>>h>>w){
        int mn=INT_MAX;
        for(int i=0; i<h;++i){
            int cost;
            cin>>cost;
            for(int y=0; y<w;++y){
                int v;
                cin>>v;
                if(v>=n && n*cost<=b){
                    mn=min(mn,n*cost);
                }
            }
        }
        if(mn==INT_MAX){
            cout<<"stay home"<<'\n';
        }else{
            cout<<mn<<'\n';
        }
    }
    return 0;
}

