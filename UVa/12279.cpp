#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,cnt=1;
    while(cin>>n && n!=0){
        int reason=0, give=0;
        for(int i=0; i<n;++i){
            int curr;
            cin>>curr;
            if(curr==0){
                give++;
            }else{
                reason++;
            }
        }
        cout<<"Case "<<cnt<<": "<<reason-give<<'\n';
        cnt++;
    }
    return 0;
}
