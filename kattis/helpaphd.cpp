#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(str=="P=NP"){
            cout<<"skipped"<<'\n';
        }else{
            int a=stoi(str.substr(0,str.find("+")));
            int b=stoi(str.substr(str.find("+"),str.size()));
            cout<<a+b<<'\n';
        }
    }
    return 0;
}

