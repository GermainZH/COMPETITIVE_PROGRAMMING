#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,score=INT_MIN,sr;
        cin>>n>>sr;
        for(int i=1; i<n;++i){
            int curr;
            cin>>curr;
            score=max(score,sr-curr);
            sr=max(sr,curr);
        }
        cout<<score<<'\n';
    }
    return 0;
}
