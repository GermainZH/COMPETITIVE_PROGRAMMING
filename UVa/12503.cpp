#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        getline(cin,s);
        int log[n];
        for(int i=0; i<n;++i){
            getline(cin,s);
            if(s=="LEFT"){
                log[i]=-1;
            }else if(s=="RIGHT"){
                log[i]=1;
            }else if(s.substr(0,7)=="SAME AS"){
                log[i]=log[stoi(s.substr(8,s.size()))-1];
            }
        }
        int fp=0;
        for(int i=0; i<n;++i){
            fp+=log[i];
        }
        cout<<fp<<'\n';
    }
    return 0;
}
