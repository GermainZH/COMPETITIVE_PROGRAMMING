/*
ID: germain1
TASK: wormhole
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int ct=0;

struct triple{
    long long first;
    long long second;
    long long third;
};

bool isValid(triple* xyr, int n, int pairs[]){
    for(int i=1;i<=n;++i){
        int next=i;
        int track=0;
        while(track<n+n){
            next=pairs[xyr[next].third];
            if(next==0){
                break;
            }else{
                track++;
            }
        }
        if(track==n+n){
            return true;
        }
    }
    return false;
}

void genpairs(triple* xyr, int n, int pairs[]){
    int y;
    for(y=1;y<=n;++y){
        if(pairs[y]==0){
            break;
        }
    }
    if(y==n+1){
        if(isValid(xyr,n,pairs)){
            ct++;
        }
    }else{
        for(int j=y+1; j<=n;++j){
            if(pairs[j]==0 ){
                pairs[y]=j;
                pairs[j]=y;
                genpairs(xyr,n,pairs);
                pairs[y]=0;
                pairs[j]=0;
            }
        }
    }
}

int main(){
    ifstream fin ("wormhole.in");
    ofstream fout ("wormhole.out");
    int n;
    fin>>n;
    triple xyr[n+1];
    int pairs[n+1]={0};
    xyr[0]={0,0,0};
    for(int i=1; i<=n;++i){
        fin>>xyr[i].first>>xyr[i].second;
    }
    for(int i=1; i<=n;++i){
        xyr[i].third=INT_MAX;
        int dist=INT_MAX;
        for(int y=1; y<=n; ++y){
            if(xyr[i].first<xyr[y].first && xyr[i].second==xyr[y].second &&dist>xyr[y].first){
                xyr[i].third=y;
                dist=xyr[y].first;
            }
        }
        if(xyr[i].third==INT_MAX){
            xyr[i].third=0;
        }
    }
    genpairs(xyr,n,pairs);
    fout<<ct<<'\n';
    return 0;
}
