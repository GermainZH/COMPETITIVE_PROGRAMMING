#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y;
    while(cin>>x>>y){
        if(x+y==0){
            break;
        }
        if(x+y==13){
            cout<<"Never speak again."<<'\n';
        }else if(x<y){
            cout<<"Left beehind."<<'\n';
        }else if(x==y){
            cout<<"Undecided."<<'\n';
        }else if(x>y){
            cout<<"To the convention."<<'\n';
        }
    }
    return 0;
}
