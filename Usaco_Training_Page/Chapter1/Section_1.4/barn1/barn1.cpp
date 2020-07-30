/*
ID: germain1
TASK: barn1
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ifstream fin ("barn1.in");
    ofstream fout ("barn1.out");
    fin.tie(NULL);
    fout.tie(NULL);
    int m,s,c;
    fin>>m>>s>>c;
    int barn1[s]={0},barn2[s];
    fill_n(barn2,s,1);
    int st=INT_MAX;
    int ed=0;
    for(int i=0; i<c;++i){
        int occ;
        fin>>occ;
        barn1[occ-1]=1;
        st=min(st,occ-1);
        ed=max(ed,occ-1);
    }
    while(m-1>0){
        int rSt=0;
        int rEd=0;
        int ctM=0;
        int ct=0;
        for(int i=st; i<=ed;++i){
            if(barn1[i]==0){
                ct++;
                if(ct>=ctM){
                    rEd=i;
                    rSt=i-ct+1;
                    ctM=ct;
                }
            }else{
                ct=0;
            }
        }
        for(int i=rSt;i<=rEd;++i){
            barn2[i]=0;
            barn1[i]=1;
        }
        m--;
    }
    int r=0;
    for(int i=st;i<=ed;++i){
        if(barn2[i]==1){
            r++;
        }
    }
    fout<<r<<'\n';
    return 0;
}

