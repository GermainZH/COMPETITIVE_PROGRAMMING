/*
ID: germain1
TASK: milk
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ifstream fin ("milk.in");
    ofstream fout ("milk.out");
    fin.tie(NULL);
    fout.tie(NULL);
    int n,m;
    fin>>n>>m;
    pair<int,int> farmer[m];
    for(int i=0; i<m;++i){
        fin>>farmer[i].first>>farmer[i].second;
    }
    sort(farmer,farmer+m);
//    for(int i=0; i<m;++i){
//        cout<<farmer[i].first<<' '<<farmer[i].second<<'\n';
//    }
    int cost=0;
    while(n>0){
        for(int i=0; i<m;++i){
            while(n>0 && farmer[i].second>0){
                cost+=farmer[i].first;
                n--;
                farmer[i].second--;
            }
            if(n==0){
                break;
            }
        }
    }
    fout<<cost<<'\n';
    return 0;
}

