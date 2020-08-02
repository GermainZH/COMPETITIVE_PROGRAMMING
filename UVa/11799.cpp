#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    for(int i=1; i<=t;++i){
        cin>>n;
        int speed;
        int mx=0;
        for(int y=0; y<n;++y){
            cin>>speed;
            mx=max(mx,speed);
        }
        cout<<"Case "<<i<<": "<<mx<<'\n';
    }
    return 0;
}

