#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string((((n*567/9)+7492)*235/47)-498);
        cout<<s.at(s.size()-2)<<'\n';
    }
    return 0;
}
