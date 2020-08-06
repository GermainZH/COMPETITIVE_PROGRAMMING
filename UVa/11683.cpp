#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,c;
    while(cin>>a>>c && a){
        int prev, on=0;
        cin>>prev;
        for(int i=1; i<c;++i){
            int curr;
            cin>>curr;
            if(curr>prev){
                on+=curr-prev;
            }
            prev=curr;
        }
        on+=a-prev;
        cout<<on<<'\n';
    }
    return 0;
}

