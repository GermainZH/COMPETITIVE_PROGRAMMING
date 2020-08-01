#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n;++i){
        double w;
        cin>>w;
        cout<<(int)(-1+sqrt(1+8*w))/2<<'\n';
    }
    return 0;
}

