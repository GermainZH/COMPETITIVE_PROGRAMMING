#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(stoi(a)>stoi(b)){
        cout<<a<<'\n';
    }else{
        cout<<b<<'\n';
    }
    return 0;
}

