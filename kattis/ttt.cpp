#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(y==1 && x!=0){
        cout<<"IMPOSSIBLE"<<'\n';
    }else if(y==1 && x==0){
        cout<<"ALL GOOD"<<'\n';
    }else{
        cout<<setprecision(9)<<fixed<<(double)x/(double)(1-y)<<'\n';
    }
    return 0;
}

