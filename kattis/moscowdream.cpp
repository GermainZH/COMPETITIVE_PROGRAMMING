#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if((a+b+c>=n) && (a>=1) && (b>=1) && (c>=1) && (n >= 3)){
        cout<<"YES"<<'\n';
    }else{
        cout<<"NO"<<'\n';
    }
    return 0;
}

