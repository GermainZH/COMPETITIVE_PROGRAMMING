#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool reached=false;
    int n;
    cin>>n;
    int i;
    for(i=0; i<n;++i){
        int k;
        bool soup=false, pancakes=false;
        string name,item;
        cin>>k;
        getline(cin,item);
        getline(cin,name);
        for(int y=0; y<k;++y){
            string item;
            getline(cin,item);
            if(item=="pea soup"){
                soup=true;
            }else if(item=="pancakes"){
                pancakes=true;
            }
        }
        if(pancakes && soup){
            cout<<name<<'\n';
            break;
        }
    }
    if(i==n){
        cout<<"Anywhere is fine I guess"<<'\n';
    }
    return 0;
}

