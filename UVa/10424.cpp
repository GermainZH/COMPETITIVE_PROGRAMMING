#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    while(cin>>a>>b){
        int as=0, bs=0;
        for(int i=0;i<a.size();++i){
            as+=tolower(a.at(i))-96;
        }
        for(int i=0;i<b.size();++i){
            bs+=tolower(b.at(i))-96;
        }
        cout<<(double)as/bs*100<<'\n';
    }
    return 0;
}

