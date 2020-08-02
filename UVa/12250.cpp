#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int i=1;
    cin>>s;
    while(s!="#"){
        if(s=="HELLO"){
        cout<<"Case "<<i<<": ENGLISH"<<'\n';
        }else if(s=="HOLA"){
            cout<<"Case "<<i<<": SPANISH"<<'\n';
        }else if(s=="HALLO"){
            cout<<"Case "<<i<<": GERMAN"<<'\n';
        }else if(s=="BONJOUR"){
            cout<<"Case "<<i<<": FRENCH"<<'\n';
        }else if(s=="CIAO"){
            cout<<"Case "<<i<<": ITALIAN"<<'\n';
        }else if(s=="ZDRAVSTVUJTE"){
            cout<<"Case "<<i<<": RUSSIAN"<<'\n';
        }else{
            cout<<"Case "<<i<<": UNKNOWN"<<'\n';
        }
        cin>>s;
        i++;
    }
    return 0;
}
