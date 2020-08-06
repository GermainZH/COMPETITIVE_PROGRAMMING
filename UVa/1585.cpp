#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int totalscore=0;
        for(int i=0; i<s.size();++i){
            int score=0;
            for(int y=0; y<=i;++y){
                if(s.at(y)=='O'){
                    score++;
                }else{
                    score=0;
                }
            }
            totalscore+=score;
        }
        cout<<totalscore<<'\n';
    }
    return 0;
}
