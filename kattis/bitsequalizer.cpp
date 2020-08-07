#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    string a,b;
    for(int c=1; c<=t;++c){
        int aq0=0,aq1=0,a1=0,a0=0;
        cin>>a>>b;
        for(int i=0; i<a.size();++i){
            if(b.at(i)=='0'){
                if(a.at(i)=='1')
                    a1++;
                else if(a.at(i)=='?')
                    aq0++;
            }else{
                if(a.at(i)=='0')
                    a0++;
                else if(a.at(i)=='?')
                    aq1++;
            }
        }
        if((a1==a0)||(a0<a1 && a1-a0<=aq1)){
            cout<<"Case "<<c<<": "<<a0+aq1+aq0<<'\n';
        }else if(a0>a1){
            cout<<"Case "<<c<<": "<<a1+aq0+aq1<<'\n';
        }else{
            cout<<"Case "<<c<<": "<<-1<<'\n';
        }
    }
    return 0;
}
