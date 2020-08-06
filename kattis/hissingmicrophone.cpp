#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string w;
    cin>>w;
    bool flag=false;
    for(int i=0; i<w.size()-1;++i){
        if(w.at(i)=='s' && w.at(i+1)=='s'){
            cout<<"hiss"<<'\n';
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"no hiss"<<'\n';
    }
    return 0;
}

