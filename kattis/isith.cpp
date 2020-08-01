#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    getline(cin,str);
    if(str=="OCT 31" || str=="DEC 25"){
        cout<<"yup"<<'\n';
    }else{
        cout<<"nope"<<'\n';
    }
    return 0;
}

