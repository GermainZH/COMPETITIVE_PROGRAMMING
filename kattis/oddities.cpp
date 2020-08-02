#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(abs(num)%2==1){
            cout<<num<<" is odd"<<'\n';
        }else{
            cout<<num<<" is even"<<'\n';
        }
    }
    return 0;
}
