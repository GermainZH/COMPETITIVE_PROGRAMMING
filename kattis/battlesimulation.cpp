#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string m;
    cin>>m;
    int i=0;
    while(i<m.size()){
        if(i+3<=m.size() && m.substr(i,3).find("R")!=string::npos && m.substr(i,3).find("B")!=string::npos && m.substr(i,3).find("L")!=string::npos){
            cout<<'C';
            i+=3;
        }else if(m.at(i)=='R'){
            cout<<'S';
            i++;
        }else if(m.at(i)=='B'){
            cout<<'K';
            i++;
        }else{
            cout<<'H';
            i++;
        }
    }
    cout<<'\n';
    return 0;
}
