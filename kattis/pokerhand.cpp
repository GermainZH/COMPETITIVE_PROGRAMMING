#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string hand[5];
    for(int i=0; i<5;++i){
        cin>>hand[i];
    }
    int mx=0;
    for(int i=0; i<5;++i){
        int strength=0;
        for(int y=i; y<5;++y){
            if(hand[i].at(0)==hand[y].at(0)){
                strength++;
            }
        }
        mx=max(mx,strength);
    }
    cout<<mx<<'\n';
    return 0;
}

