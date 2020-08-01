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
        cout<<(n/3)*(m/3)<<'\n';
    }
    return 0;
}

