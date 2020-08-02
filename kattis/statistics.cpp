#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,c=0,cnt=1;
    while(cin>>n){
        int mx=INT_MIN,mn=INT_MAX;
        for(int i=0; i<n;++i){
            cin>>c;
            mx=max(mx,c);
            mn=min(mn,c);
        }
        cout<<"Case "<<cnt<<": "<<mn<<" "<<mx<<" "<<mx-mn<<'\n';
        cnt++;
    }
    return 0;
}
