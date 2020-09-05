#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int arr[100000];
int qr[3000];
int dp[230];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	while(t--){
		memset(dp,-1,sizeof dp);
		int n,q;
		cin>>n>>q;
		for(int i=0; i<n;++i){
			cin>>arr[i];
		}
		for(int i=0; i<q;++i){
			cin>>qr[i];
			if(dp[qr[i]-1]==-1){
				int mx=0;
				for(int y=0; y<n;++y){
					mx=max(mx,arr[y]&qr[i]);
				}
				dp[qr[i]-1]=mx;
			}
			cout<<dp[qr[i]-1]<<'\n';
		}
	}
	return 0;				
}
