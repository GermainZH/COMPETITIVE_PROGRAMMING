#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<(double)-x/(y-1)<<'\n';
    }
    return 0;
}

