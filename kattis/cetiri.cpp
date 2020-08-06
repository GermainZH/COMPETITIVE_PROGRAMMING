#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[1]-a[0]==a[2]-a[1]){
        cout<<a[2]+a[1]-a[0];
    }else if(a[1]-a[0]==2*(a[2]-a[1])){
        cout<<a[0]+a[2]-a[1]<<'\n';
    }else{
        cout<<a[1]+a[1]-a[0];
    }
    return 0;
}
