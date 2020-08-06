#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    char id;
    string result;
    map<char,int> logs;
    int time=0,completed=0;
    while(cin>>n && n!=-1){
        cin>>id>>result;
        if(result=="wrong"){
            logs[id]++;
        }else{
            completed++;
            time+=n+20*logs[id];
        }
    }
    cout<<completed<<" "<<time<<'\n';
    return 0;
}

