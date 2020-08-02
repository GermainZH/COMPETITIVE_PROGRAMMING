#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int minV=INT_MAX;
    int minI=0;
    for(int i=0; i<n;++i){
        int curr;
        cin>>curr;
        if(curr<minV){
            minV=curr;
            minI=i;
        }
    }
    cout<<minI<<'\n';
    return 0;
}
