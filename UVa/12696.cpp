#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,c=0;
    cin>>n;
    for(int i=0; i<n;++i){
        double l,w,d,wt;
        cin>>l>>w>>d>>wt;
        if(((l+w+d<=125)||(l<=56 && w<=45 && d<=25)) && wt<=7){
            cout<<1<<'\n';
            c++;
        }else{
            cout<<0<<'\n';
        }
    }
    cout<<c<<'\n';
    return 0;
}
