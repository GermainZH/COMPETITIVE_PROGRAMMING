/*
ID: germain1
TASK: skidesign
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ifstream fin ("skidesign.in");
    ofstream fout ("skidesign.out");
    int n;
    fin>>n;
    int hills[n];
    int low=INT_MAX, high=0;
    for(int i=0; i<n;++i){
        fin>>hills[i];
        low=min(low,hills[i]);
        high=max(high,hills[i]);
    }
    int minCost=INT_MAX;
    for(int i=low;i<=high-17;++i){
        int cost=0;
        for(int y=0; y<n;++y){
            if(hills[y]<i){
                cost+=pow(i-hills[y],2);
            }else if(hills[y]>i+17){
                cost+=pow(hills[y]-i-17,2);
            }
        }
        minCost=min(minCost,cost);
    }
    fout<<minCost<<'\n';
    return 0;
}

