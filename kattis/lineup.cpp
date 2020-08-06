#include <bits/stdc++.h>

using namespace std;

string a[20];
string b[20];
string c[20];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string pg;
    for(int i=0; i<n; i++){
        cin>>pg;
        a[i]=pg;
        b[i]=pg;
        c[i]=pg;
    }
    sort(b,b+n);
    sort(c,c+n,greater<string>());
    int e=0,f=0;
    for(int i=0; i<n;++i){
        if(a[i]==b[i]){
            e++;
        }
        if(a[i]==c[i]){
            f++;
        }
    }
    if((e==n && f==n) ||(e!=n && f!=n)){
        cout<<"NEITHER"<<'\n';
    }else if(e==n){
        cout<<"INCREASING"<<'\n';
    }else{
        cout<<"DECREASING"<<'\n';
    }
    return 0;
}

