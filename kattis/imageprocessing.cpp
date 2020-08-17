#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int h,w,n,m;
	cin>>h>>w>>n>>m;
	int im[h][w];
	int kn[n][m];
	for(int i=0; i<h;++i){
		for(int y=0; y<w;++y){
			cin>>im[i][y];
		}
	}
	for(int i=n-1; i>=0;--i){
		for(int y=m-1; y>=0;--y){
			cin>>kn[i][y];
		}
	}
	int img[h-n+1][w-m+1];
	for(int i=0; i<=h-n;++i){
		for(int y=0; y<=w-m;++y){
			int sum=0;
			for(int j=0;j<n;++j){
				for(int k=0; k<m;++k){
					sum+=im[j+i][k+y]*kn[j][k];
				}
			}
			img[i][y]=sum;
		}
	}
	for(int i=0; i<=h-n;++i){
		cout<<img[i][0];
		for(int y=1; y<=w-m;++y){
			cout<<' '<<img[i][y];
		}
		cout<<'\n';
	}
	return 0;				
}
