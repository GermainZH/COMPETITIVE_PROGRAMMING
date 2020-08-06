#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int line[n];
    line[0]=1;
    for(int i=1+1;i<=n;++i){
        int c;
        cin>>c;
        line[c+1]=i;
    }
    cout<<line[0];
    for(int i=1; i<n;++i){
        cout<<" "<<line[i];
    }
    cout<<'\n';
    return 0;
}
