#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int arr[16384];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n){
		int l=pow(2,n);
		for(int i=0; i<l;++i){
			cin>>arr[i];
		}
		int pc[l];
		for(int i=0; i<l;++i){
			int t=0;
			for(int y=0; y<n;++y){
				t+=arr[i^(1<<y)];
			}
			pc[i]=t;
		}
		int mx=0;
		for(int i=0; i<l;++i){
			for(int y=0; y<n;++y){
				mx=max(mx,pc[i]+pc[i^(1<<y)]);
			}
		}
		cout<<mx<<'\n';
	}
	return 0;	
}
