/*
ID: germain1
TASK: numtri
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin ("numtri.in");
    ofstream fout ("numtri.out");
    int n;
    fin>>n;
    int tri[n][n];
    for(int i=0; i<n;++i){
        for(int y=0; y<=i;++y){
            fin>>tri[i][y];
        }
    }
    for(int l=n-2;l>=0;l--){
        for(int i=0; i<=l;++i){
            tri[l][i]+=max(tri[l+1][i],tri[l+1][i+1]);
        }
    }
    fout<<tri[0][0]<<'\n';
    return 0;
}
