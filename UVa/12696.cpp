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
/*
4
51.23 40.12 21.20 3.45
60.00 30.00 20.00 7.00
52.03 41.25 23.50 7.01
50.00 45.00 30.10 6.02

*/
