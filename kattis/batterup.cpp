#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,nm=0,dm=0;
    cin>>n;
    for(int i=0; i<n;++i){
        int bat;
        cin>>bat;
        if(bat!=-1){
            nm+=bat;
            dm++;
        }
    }
    cout<<setprecision(17)<<(double)nm/dm<<'\n';
    return 0;
}

