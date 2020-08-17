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
	int a[n][m];
	for(int i=0; i<n;++i){
		for(int y=0; y<m;++y){
			cin>>a[i][y];
		}
	}
	for(int i=1; i<n;++i){
		a[i][0]+=a[i-1][0];
	}
	for(int i=1; i<m;++i){
		a[0][i]+=a[0][i-1];
	}
	for(int i=1; i<n;++i){
		for(int y=1; y<m;++y){
			a[i][y]+=max(a[i-1][y],a[i][y-1]);
		}
	}
	cout<<a[0][m-1];
	for(int i=1; i<n;++i){
		cout<<' '<<a[i][m-1];
	}
	cout<<'\n';
	return 0;
}
