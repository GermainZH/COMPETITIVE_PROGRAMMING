#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s1,s2,r1,r2;
    while(cin>>s1>>s2>>r1>>r2 && s1+s2+r1+r2!=0){
        if(max(s1*10+s2,s2*10+s1)==max(r1*10+r2,r2*10+r1)){
            cout<<"Tie."<<'\n';
        }else if(max(s1*10+s2,s2*10+s1)==21){
            cout<<"Player 1 wins."<<'\n';
        }else if(max(r1*10+r2,r2*10+r1)==21){
            cout<<"Player 2 wins."<<'\n';
        }else if(r1==r2 && s1!=s2){
            cout<<"Player 2 wins."<<'\n';
        }else if(r1!=r2 && s1==s2){
            cout<<"Player 1 wins."<<'\n';
        }else if(max(s1*10+s2,s2*10+s1)>max(r1*10+r2,r2*10+r1)){
            cout<<"Player 1 wins."<<'\n';
        }else{
            cout<<"Player 2 wins."<<'\n';
        }
    }
    return 0;
}
