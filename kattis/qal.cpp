#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    double qal=0;
    while(n--){
        double a,b;
        cin>>a>>b;
        qal+=a*b;
    }
    cout<<qal<<'\n';
    return 0;
}

