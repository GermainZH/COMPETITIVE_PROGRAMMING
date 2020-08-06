#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<t;++i){
        int n, mile=0, juice=0;
        cin>>n;
        for(int i=0; i<n;++i){
            int call;
            cin>>call;
            mile+=(int)(call/30)*10+10;
            juice+=(int)(call/60)*15+15;
        }
        if(mile==juice){
            cout<<"Case "<<i+1<<": Mile Juice "<<mile<<'\n';
        }else if(mile<juice){
            cout<<"Case "<<i+1<<": Mile "<<mile<<'\n';
        }else{
            cout<<"Case "<<i+1<<": Juice "<<juice<<'\n';
        }
    }
    return 0;
}

