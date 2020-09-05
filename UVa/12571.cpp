#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int arr[100000];
int qr[3000];
int dp[100000][3000];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		for(int i=0; i<n;++i){
			cin>>arr[i];
		}
		for(int i=0; i<q;++i){
			cin>>qr[i];
			int mx=0;
			for(int y=0; y<n;++y){
				mx=max(mx,arr[y]&qr[i]);
			}
			cout<<mx<<'\n';
		}
	}
	return 0;				
}
