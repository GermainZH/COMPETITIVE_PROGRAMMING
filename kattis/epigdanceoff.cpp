#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,m;
	cin>>n>>m;
	char c[n][m];
	for(int i=0; i<n;++i){
		for(int y=0; y<m;++y){
			cin>>c[i][y];
		}
	}
	int ct=1;
	for(int i=0; i<m;++i){
		int y;
		for(y=0; y<n;++y){
			if(c[y][i]!='_')break;
		}
		if(y==n){
			ct++;
		}
	}
	cout<<ct<<'\n';
	return 0;				
}
