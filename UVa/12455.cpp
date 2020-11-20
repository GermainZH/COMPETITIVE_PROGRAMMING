#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back
#define p push
#define pp pop

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int bars[p];
		for(int i=0; i<p;++i){
			cin>>bars[i];
		}
		bool flag=false;
		for(int i=0; i<(1<<p);++i){
			vector<int> subset;
			for(int y=0; y<p;++y){
				if((i&(1<<y))>0){
					subset.pb(bars[y]);
				}
			}
			int sum=0;
			for(auto t:subset){
				sum+=t;
			}
			if(sum==n){
				flag=true;
				break;
			}
		}
		if(flag){
			cout<<"YES"<<'\n';
		}else{
			cout<<"NO"<<'\n';
		}
	}
	return 0;				
}
