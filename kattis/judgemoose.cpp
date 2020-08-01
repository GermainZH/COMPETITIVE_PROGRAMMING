#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    if(a+b==0){
        cout<<"Not a moose"<<'\n';
    }else if(a==b){
        cout<<"Even "<<a+b<<'\n';
    }else{
        cout<<"Odd "<<2*max(a,b)<<'\n';
    }
    return 0;
}

