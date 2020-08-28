#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int r,c;
	while(cin>>r>>c && r+c!=0){
		char arr[r][c];
		for(int i=0; i<r;++i){
			for(int y=0; y<c;++y){
				cin>>arr[i][y];
			}
		}
		for(int i=0; i<c;++i){
			for(int y=0; y<c-i-1;++y){
				for(int j=0; j<r;++j){
					if(tolower(arr[j][y])<tolower(arr[j][y+1])){
						break;
					}else if(tolower(arr[j][y])>tolower(arr[j][y+1])){
						for(int k=0; k<r;++k){
							swap(arr[k][y],arr[k][y+1]);
						}
						break;
					}
				}
			}
		}
		for(int i=0; i<r;++i){
			for(int y=0; y<c;++y){
				cout<<arr[i][y];
			}
			cout<<'\n';
		}
	}
	return 0;				
}
