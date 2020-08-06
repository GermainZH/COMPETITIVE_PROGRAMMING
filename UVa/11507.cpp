#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,map<string,string>> bends;
    bends["+x"]["+y"]="+y";
    bends["+x"]["-y"]="-y";
    bends["+x"]["+z"]="+z";
    bends["+x"]["-z"]="-z";

    bends["+y"]["+y"]="-x";
    bends["+y"]["-y"]="+x";
    bends["+y"]["+z"]="+y";
    bends["+y"]["-z"]="+y";

    bends["+z"]["+y"]="+z";
    bends["+z"]["-y"]="+z";
    bends["+z"]["+z"]="-x";
    bends["+z"]["-z"]="+x";

    bends["-x"]["+y"]="-y";
    bends["-x"]["-y"]="+y";
    bends["-x"]["+z"]="-z";
    bends["-x"]["-z"]="+z";

    bends["-y"]["+y"]="+x";
    bends["-y"]["-y"]="-x";
    bends["-y"]["+z"]="-y";
    bends["-y"]["-z"]="-y";

    bends["-z"]["+y"]="-z";
    bends["-z"]["-y"]="-z";
    bends["-z"]["+z"]="+x";
    bends["-z"]["-z"]="-x";
    int l;
    while(cin>>l && l){
        string curr="+x",next;
        for(int i=0; i<l-1;++i){
            cin>>next;
            if(next!="No")
                curr=bends[curr][next];
        }
        cout<<curr<<'\n';
    }

    return 0;
}
