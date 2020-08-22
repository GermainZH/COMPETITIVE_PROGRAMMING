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
	for(int c=1;c<=t;++c){
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=0; i<n;++i){
			string temp;
			cin>>temp;
			for(int y=0; y<n;++y){
				arr[i][y]=temp.at(y)-'0';
			}
		}
		int m;
		cin>>m;
		for(int i=0; i<m;++i){
			string a;
			cin>>a;
			if(a=="row"){
				int r0,r1;
				cin>>r0>>r1;
				for(int y=0; y<n;++y){
					swap(arr[r0-1][y],arr[r1-1][y]);
				}
			}else if(a=="col"){
				int c0,c1;
				cin>>c0>>c1;
				for(int y=0; y<n;++y){
					swap(arr[y][c0-1],arr[y][c1-1]);
				}
			}else if(a=="inc"){
				for(int y=0; y<n;++y){
					for(int j=0; j<n;++j){
						arr[y][j]++;
						if(arr[y][j]==10){
							arr[y][j]=0;
						}
					}
				}
			}else if(a=="dec"){
				for(int y=0; y<n;++y){
					for(int j=0; j<n;++j){
						arr[y][j]--;
						if(arr[y][j]==-1){
							arr[y][j]=9;
						}
					}
				}
			}else{
				int temp[n][n];
				memcpy(temp,arr,n*n*sizeof(int));
				for(int y=0; y<n;++y){
					for(int j=0; j<n;++j){
						arr[y][j]=temp[j][y];
					}
				}
			}
		}
		cout<<"Case #"<<c<<'\n';
		for(int i=0;i<n;++i){
			for(int y=0; y<n;++y){
				cout<<arr[i][y];
			}
			cout<<'\n';
		}
		cout<<'\n';
	}
	return 0;				
}
