/*
ID: germain1
TASK: milk3
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int ac,bc,cc;

bool isSolved[20+1][20+1][20+1]={false};

void solve(int a,int b,int c){
    if(!isSolved[a][c][b]){
        isSolved[a][c][b]=true;
        if(a+b<=bc){
            solve(0,a+b,c);
        }else{
            solve(a-(bc-b),bc,c);
        }
        if(a+b<=ac){
            solve(a+b,0,c);
        }else{
            solve(ac,b-(ac-a),c);
        }

        if(a+c<=cc){
            solve(0,b,a+c);
        }else{
            solve(a-(cc-c),b,cc);
        }
        if(a+c<=ac){
            solve(a+c,b,0);
        }else{
            solve(ac,b,c-(ac-a));
        }

        if(c+b<=bc){
            solve(a,c+b,0);
        }else{
            solve(a,bc,c-(bc-b));
        }
        if(c+b<=cc){
            solve(a,0,c+b);
        }else{
            solve(a,b-(cc-c),cc);
        }
    }
}


int main(){
    ifstream fin ("milk3.in");
    ofstream fout ("milk3.out");
    fin>>ac>>bc>>cc;
    int a=0,b=0,c=cc;
    solve(a,b,c);
    int last=0;
    for(int i=0; i<=20;++i){
        for(int y=0; y<=20;++y){
            if(isSolved[0][i][y]){
                last=i;
            }
        }
    }
    for(int i=0; i<last;++i){
        for(int y=0; y<=20;++y){
            if(isSolved[0][i][y]){
                fout<<i<<' ';
            }
        }
    }
    fout<<last<<'\n';
    return 0;
}

