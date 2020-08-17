#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	for(int i=0; i<t;++i){
		int grid[5][5]={0};
		for(int y=1; y<4;++y){
			int m;
			cin>>m;
			grid[y][1]=m/100;
			grid[y][2]=(m/10)%10;
			grid[y][3]=m%10;
		}
		int c=-1;
		while(true){
			bool isZero=true;
			for(int y=1; y<4;++y){
				for(int j=1; j<4;++j){
					if(grid[y][j]==1){
						isZero=false;
						break;
					}
				}
			}
			if(isZero){
				break;
			}
			c++;
			int gridB[5][5];
			memcpy(gridB, grid, 5*5*sizeof(int));
			for(int y=1; y<4;++y){
				for(int j=1; j<4;++j){
					grid[y][j]=(gridB[y+1][j]+gridB[y-1][j]+gridB[y][j+1]+gridB[y][j-1])%2;
				}
			}
		}
		cout<<c<<'\n';
	}
	return 0;				
}
