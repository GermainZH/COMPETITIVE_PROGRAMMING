#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int s[2000000];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n){
		int mn=2000000,mx=0;
		for(int i=0; i<n;++i){
			cin>>s[i];
			mn=min(mn,s[i]);
			mx=max(mx,s[i]);
		}
		int f[mx-mn+1];
		memset(f,0,sizeof f);
		for(int i=0; i<n;++i){
			f[s[i]-mn]++;
		}
		int y=0;
		for(int i=mn; i<=mx;++i){
			while(f[i-mn]--){
				s[y++]=i;
			}
		}
		cout<<s[0];
		for(int i=1; i<n;++i){
			cout<<' '<<s[i];
		}
		cout<<'\n';
	}
	return 0;				
}
