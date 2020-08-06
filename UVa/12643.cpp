#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j,c;
    while(cin>>n>>i>>j){
        c=0;
        do{
            i=(i+1)/2;
            j=(j+1)/2;
            c++;
        }while(i!=j);
        cout<<c<<'\n';
    }
    return 0;
}
