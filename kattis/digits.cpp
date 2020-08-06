#include <bits/stdc++.h>

using namespace std;

int solve(string x, int count){
    string digits= to_string(x.size());
    if(x==digits){
        return count;
    }
    return solve(digits, count+1);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string x;
    while(cin>>x){
        if(x=="END"){
            break;
        }
        cout<<solve(x,1)<<'\n';
    }
    return 0;
}

