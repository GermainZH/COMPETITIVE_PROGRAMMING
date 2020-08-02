#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=1; i<=n;++i){
        int l,w,h;
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20){
            cout<<"Case "<<i<<": good"<<'\n';
        }else{
            cout<<"Case "<<i<<": bad"<<'\n';
        }
    }
    return 0;
}

