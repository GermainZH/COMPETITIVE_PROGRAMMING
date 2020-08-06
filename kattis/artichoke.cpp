#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p,a,b,c,d,n;
    cin>>p>>a>>b>>c>>d>>n;
    double maxV=0;
    double maxD=0;
    for(int k=1;k<=n;++k){
        double price=p*(sin(a*k+b)+cos(c*k+d)+2);
        maxV=max(maxV,price);
        maxD=max(maxD,maxV-price);
    }
    cout<<setprecision(6)<<fixed<<maxD<<'\n';
    return 0;
}
