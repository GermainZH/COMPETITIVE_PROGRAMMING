#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        string name,date1,date2;
        int c;
        cin>>name>>date1>>date2>>c;
        if("2010/01/01"<=date1 || "1991/01/01"<=date2){
            cout<<name<<" eligible"<<'\n';
        }else if(c>40){
            cout<<name<<" ineligible"<<'\n';
        }else{
            cout<<name<<" coach petitions"<<'\n';
        }
    }
    return 0;
}
