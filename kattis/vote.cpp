#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t;++i){
        int n;
        cin>>n;
        int total=0,mx=0,mxi=0;
        int c[n];
        for(int i=0; i<n;++i){
            cin>>c[i];
            total+=c[i];
            if(mx<c[i]){
                mx=c[i];
                mxi=i;
            }
        }
        int ct=0;
        int y;
        for(y=0; y<n;++y){
            if(c[y]==mx){
                ct++;
            }
            if(ct==2){
                cout<<"no winner"<<'\n';
                break;
            }
        }
        if(y==n){
            if(mx*2>total){
                cout<<"majority winner "<<mxi+1<<'\n';
            }else{
                cout<<"minority winner "<<mxi+1<<'\n';
            }
        }
    }
    return 0;
}
