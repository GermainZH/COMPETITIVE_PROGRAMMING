#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n;++i){
        string g;
        cin>>g;
        stack<int> range;
        int water=0;
        for(int i=0; i<g.size();++i){
            if(g[i]=='\\'){
                range.push(i);
            }else if(g[i]=='/' &&!range.empty()){
                water+=i-range.top();
                range.pop();
            }
        }
        cout<<water<<'\n';
    }
    return 0;
}

