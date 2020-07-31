/*
ID: germain1
TASK: crypt1
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

bool isValid(int c[],int f[],int m[],int s){
    bool fFlag[3]={false};
    bool mFlag[3]={false};
    for(int i=0; i<3;++i){

        if(abs(c[i]-m[i])<=2 || abs(c[i]-m[i])>=s-2){
            mFlag[i]=true;
        }
    }
    if((fFlag[0]&&fFlag[1]&&fFlag[2])||(mFlag[0]&&mFlag[1]&&mFlag[2])){
        return true;
    }
    return false;
}

int main(){
    ifstream fin ("crypt1.in");
    ofstream fout ("crypt1.out");
    int s;
    fin>>s;
    int f[3];
    int m[3];
    fin>>f[0]>>f[1]>>f[2];
    fin>>m[0]>>m[1]>>m[2];
    int counter=0;
    for(int x=1;x<=s;++x){
        for(int y=1;y<=s;++y){
            for(int z=1;z<=s;++z){
                int c[3]={x,y,z};
                if(isValid(c,f,m,s)){
                    counter++;
                }
            }
        }
    }
    fout<<counter<<'\n';
    return 0;
}
