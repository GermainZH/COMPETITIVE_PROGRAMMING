#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;++i){
        int maxb=0;
        string url[101][101];
        for(int y=0; y<10;++y){
            string a;
            int b;
            cin>>a>>b;
            url[y][b]=a;
            maxb=max(maxb,b);
        }
        cout<<"Case #"<<i<<":"<<'\n';
        for(int y=0; y<10;++y){
            if(url[y][maxb]!=""){
                cout<<url[y][maxb]<<'\n';
            }
        }
    }
    return 0;
}
