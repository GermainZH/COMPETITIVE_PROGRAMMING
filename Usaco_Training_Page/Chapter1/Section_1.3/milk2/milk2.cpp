/*
ID: germain1
TASK: milk2
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ifstream fin ("milk2.in");
    ofstream fout ("milk2.out");
    fin.tie(NULL);
    fout.tie(NULL);
    int n;
    fin>>n;
    pair<int,int> arr[n];
    for(int i=0; i<n;++i){
        fin>>arr[i].first>>arr[i].second;
    }
    sort(arr,arr+n);
    vector<pair<int,int>> vec;
    int ref=0;
    vec.push_back(arr[ref]);
    for(int i=1; i<n;++i){
        if(vec[ref].second>=arr[i].first){
            vec[ref].second=max(vec[ref].second,arr[i].second);
        }else{
            vec.push_back(arr[i]);
            ref++;
        }
    }
//    for(int i=0; i<vec.size();++i){
//        cout<<vec[i].first<<' '<<vec[i].second<<'\n';
//    }
    int maxW=0;
    int maxI=0;
    for(int i=0; i<vec.size();++i){
        maxW=max(maxW,vec[i].second-vec[i].first);
    }
    for(int i=1; i<vec.size();++i){
        maxI=max(maxI,vec[i].first-vec[i-1].second);
    }
    fout<<maxW<<' '<<maxI<<'\n';
    return 0;
}
