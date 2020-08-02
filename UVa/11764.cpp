#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    for(int cnt=1;cnt<=t;++cnt){
        int curr;
        cin>>n>>curr;
        int low=0,high=0;
        for(int i=1; i<n;++i){
            int prev=curr;
            cin>>curr;
            if(prev<curr){
                high++;
            }else if(prev>curr){
                low++;
            }
        }
        cout<<"Case "<<cnt<<": "<<high<<" "<<low<<'\n';
    }
    return 0;
}

