#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l,x;
    cin>>l>>x;
    int curr=0,den=0;
    for(int i=0; i<x;++i){
        string a;
        int g;
        cin>>a>>g;
        if(a=="enter" && curr+g<=l){
            curr+=g;
        }else if(a=="enter" && curr+g>l){
            den++;
        }else if(a=="leave"){
            curr-=g;
        }
    }
    cout<<den<<'\n';
    return 0;
}

