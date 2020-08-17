#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	char grid[5][5];
	for(int i=0; i<5;++i){
		cin>>grid[i];
	}
	int c=0;
	bool f=true;
	for(int i=0; i<5;++i){
		for(int y=0; y<5;++y){
			if(grid[i][y]=='k'){
				c++;
				if(i-2>=0 && y-1>=0 && grid[i-2][y-1]=='k'){
					f=false;
				}
				if(i-2>=0 && y+1<5 && grid[i-2][y+1]=='k'){
					f=false;
				}
				if(i+2<5 && y-1>=0 && grid[i+2][y-1]=='k'){
					f=false;
				}
				if(i+2<5 && y+1<5 && grid[i+2][y+1]=='k'){
					f=false;
				}
				if(i-1>=0 && y-2>=0 && grid[i-1][y-2]=='k'){
					f=false;
				}
				if(i-1>=0 && y+2<5 && grid[i-1][y+2]=='k'){
					f=false;
				}
				if(i+1<5 && y-2>=0 && grid[i+1][y-2]=='k'){
					f=false;
				}
				if(i+1<5 && y+2<5 && grid[i+1][y+2]=='k'){
					f=false;
				}
			}
		}
	}
	if(f && c==9){
		cout<<"valid";
	}else{
		cout<<"invalid";
	}
	cout<<'\n';
	return 0;				
}
