#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b;
    cin>>a>>b;
    if(b>=a){
        if(b-a==1){
            cout<<"Dr. Chaz will have "<<b-a<<" piece of chicken left over!"<<'\n';
        }else{
            cout<<"Dr. Chaz will have "<<b-a<<" pieces of chicken left over!"<<'\n';
        }
    }else if(b<a){
        if(a-b==1){
            cout<<"Dr. Chaz needs "<<a-b<<" more piece of chicken!"<<'\n';
        }else{
            cout<<"Dr. Chaz needs "<<a-b<<" more pieces of chicken!"<<'\n';
        }
    }
    return 0;
}

