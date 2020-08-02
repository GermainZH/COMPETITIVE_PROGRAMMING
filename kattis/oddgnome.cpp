#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int l,start,i=1;
        cin>>l;
        cin>>start;
        l--;
        while(l--){
            int curr;
            cin>>curr;
            if(curr!=i+start){
                cout<<i+1<<'\n';
            }else{
                i++;
            }
        }
    }
    return 0;
}

