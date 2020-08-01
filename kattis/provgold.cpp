#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int g,s,c;
    cin>>g>>s>>c;
    int bp= 3*g+2*s+c;
    if(bp>=8){
        cout<<"Province or Gold"<<'\n';
    }else if(bp>=6){
        cout<<"Duchy or Gold"<<'\n';
    }else if(bp>=5){
        cout<<"Duchy or Silver"<<'\n';
    }else if(bp>=3){
        cout<<"Estate or Silver"<<'\n';
    }else if(bp>=2){
        cout<<"Estate or Copper"<<'\n';
    }else{
        cout<<"Copper"<<'\n';
    }
    return 0;
}
