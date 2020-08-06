#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string characters[5];
    string c1[5]={".*.",".*.",".*.",".*.",".*."};
    string c2[5]={"***","..*","***","*..","***"};
    string c3[5]={"***","..*","***","..*","***"};
    for(int i=0; i<5;++i){
        cin>>characters[i];
    }
    for(int i=0; i<n*3+n;i+=4){
        if(characters[0].substr(i,3)==c1[0]){
            int y;
            for(y=1;y<5;++y){
                if(characters[y].substr(i,3)!=c1[y]){
                    break;
                }
            }
            if(y==5){
                cout<<1;
            }
        }
        if(characters[0].substr(i,3)==c2[0]){
            int y;
            for(y=1;y<5;++y){
                if(characters[y].substr(i,3)!=c2[y]){
                    break;
                }
            }
            if(y==5){
                cout<<2;
            }
        }
        if(characters[0].substr(i,3)==c3[0]){
            int y;
            for(y=1;y<5;++y){
                if(characters[y].substr(i,3)!=c3[y]){
                    break;
                }
            }
            if(y==5){
                cout<<3;
            }
        }
    }
    cout<<'\n';
    return 0;
}
