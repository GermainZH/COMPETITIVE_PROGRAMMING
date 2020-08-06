#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    while(cin>>n && n!=0){
        while(n/10!=0){
            int sum=0;
            while(n!=0){
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        cout<<n<<'\n';
    }
    return 0;
}
