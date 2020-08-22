#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[4][4];
	for(int i=0; i<4;++i){
		for(int y=0; y<4;++y){
			cin>>arr[i][y];
		}
	}
	int a0,a1;
	cin>>a0;
	a1=a0;
	while(a0--){
		for(int i=0; i<4/2;++i){
			for(int y=i;y<4-i-1;++y){
				int temp=arr[i][y]; 
				arr[i][y]=arr[y][4-1-i]; 
				arr[y][4-1-i]=arr[4-1-i][4-1-y]; 
				arr[4-1-i][4-1-y]=arr[4-1-y][i]; 
				arr[4-1-y][i]=temp; 
			}
		}
	}
	vector<vector<int>> grid(4);
	for(int i=0; i<4;++i){
		for(int y=0; y<4;++y){
			if(arr[i][y]){
				grid[i].pb(arr[i][y]);
			}
		}
	}
	for(int i=0; i<grid.size();++i){
		if(grid[i].size()>0){
			for(int y=0; y<grid[i].size()-1;++y){
				if(grid[i][y]==grid[i][y+1]){
					grid[i][y]*=2;
					grid[i].erase(grid[i].begin()+y+1);
				}
			}
		}
	}
	for(int i=0; i<4;++i){
		int n=4-grid[i].size();
		for(int y=0;y<n;++y){
			grid[i].pb(0);
		}
	}
	while(a1--){
		for(int i=0; i<4/2;++i){
			for(int y=i; y<4-i-1;++y){
				int temp=grid[i][y]; 
				grid[i][y]=grid[4-1-y][i]; 
				grid[4-1-y][i]=grid[4-1-i][4-1-y]; 
				grid[4-1-i][4-1-y]=grid[y][4-1-i]; 
				grid[y][4-1-i]=temp; 	
			}
		}
	}
	for(int i=0; i<4;++i){
		for(int y=0; y<4;++y){
			cout<<grid[i][y]<<' ';
		}
		cout<<'\n';
	}
	return 0;				
}
