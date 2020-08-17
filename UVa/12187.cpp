#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,r,c,k;
	while(cin>>n>>r>>c>>k && n+r+c+k!=0){
		int land[102][102]={0};
		for(int i=1; i<r+1;++i){
			for(int y=1; y<c+1;++y){
				cin>>land[i][y];
				land[i][y]++;
			}
		}
		while(k--){
			int temp[102][102];
			memcpy(temp, land, 102*102*sizeof(int));
			for(int i=1; i<r+1;++i){
				for(int y=1;y<c+1;++y){
					if(temp[i+1][y]==temp[i][y]+1||(temp[i+1][y]==1 && temp[i][y]==n)){
						land[i+1][y]=temp[i][y];
					}
					if(temp[i-1][y]==temp[i][y]+1||(temp[i-1][y]==1 && temp[i][y]==n)){
						land[i-1][y]=temp[i][y];
					}
					if(temp[i][y+1]==temp[i][y]+1||(temp[i][y+1]==1 && temp[i][y]==n)){
						land[i][y+1]=temp[i][y];
					}
					if(temp[i][y-1]==temp[i][y]+1||(temp[i][y-1]==1 && temp[i][y]==n)){
						land[i][y-1]=temp[i][y];
					}
				}
			}
		}
		for(int i=1; i<r+1;++i){
			cout<<land[i][1]-1;
			for(int y=2; y<c+1;++y){
				cout<<' '<<land[i][y]-1;
			}
			cout<<'\n';
		}
	}
	return 0;				
}
