#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,n;
    cin>>x>>n;
    int lft=0;
    for(int i=0; i<n;++i){
        int tmp;
        cin>>tmp;
        lft+=x-tmp;
    }
    cout<<lft+x<<'\n';
    return 0;
}

