/*
ID: germain1
TASK: ariprog
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin ("ariprog.in");
    ofstream fout ("ariprog.out");
    int n,m;
    fin>>n>>m;
    int bisquare[2*m*m+1]={0};
    for(int i=0;i<=m;++i){
        for(int y=0; y<=m;++y){
            bisquare[i*i+y*y]=1;
        }
    }
    bool flag=false;
    for(int i=1;i<=2*m*m/(n-1);++i){
        for(int y=0; y<=2*m*m-(n-1)*i;++y){
            if(bisquare[y]==1){
                int c=1;
                int curr=y;
                while(c<n && curr+i<2*m*m+1){
                    curr+=i;
                    if(bisquare[curr]==0){
                        break;
                    }
                    c++;

                }
                if(c>=n){
                    fout<<y<<' '<<i<<'\n';
                    flag=true;
                }
            }
        }
    }
    if(!flag){
        fout<<"NONE"<<'\n';
    }
    return 0;
}

