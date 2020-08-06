#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int price[n];
    for(int i=0; i<n;++i){
        cin>>price[i];
    }
    int m;
    cin>>m;
    int toppings[m];
    for(int i=0; i<m;++i){
        cin>>toppings[i];
    }
    int mn=INT_MAX;
    for(int i=0; i<n;++i){
        int c;
        cin>>c;
        for(int y=0; y<c;++y){
            int match;
            cin>>match;
            mn=min(mn,price[i]+toppings[match-1]);
        }
    }
    int a;
    cin>>a;
    if(a/mn-1>0){
        cout<<a/mn-1<<'\n';
    }else{
        cout<<0<<'\n';
    }
    return 0;
}
