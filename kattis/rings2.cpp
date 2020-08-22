#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
int rings[102][102];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,m,c=0;
	cin>>n>>m;
	for(int i=1; i<=n;++i){
		for(int y=1; y<=m;++y){
			char t;
			cin>>t;
			if(t=='T'){
				rings[i][y]=101;
			}
		}
	}
	for(int r=0; r<100;++r){
		for(int i=1; i<=n;++i){
			for(int y=1; y<=m;++y){
				rings[i][y]=min(rings[i][y],rings[i+1][y]+1);
				rings[i][y]=min(rings[i][y],rings[i-1][y]+1);
				rings[i][y]=min(rings[i][y],rings[i][y+1]+1);
				rings[i][y]=min(rings[i][y],rings[i][y-1]+1);
			}
		}
	}
	for(int i=1;i<n;++i){
		for(int y=1;y<=m;++y){
			c=max(c,rings[i][y]);
		}
	}
	for(int i=1; i<=n;++i){
		for(int y=1;y<=m;++y){
			if(c<10){
				if(rings[i][y]==0){
					cout<<"..";
				}else{
					cout<<'.'<<rings[i][y];
				}
			}else{
				if(rings[i][y]==0){
					cout<<"...";
				}else if(rings[i][y]<10){
					cout<<".."<<rings[i][y];
				}else{
					cout<<'.'<<rings[i][y];
				}
			}
		}
		cout<<'\n';
	}
	return 0;				
}
