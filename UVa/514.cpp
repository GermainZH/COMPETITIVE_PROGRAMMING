#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n){
		int a[n];
		while(cin>>a[0] && a[0]){
			for(int i=1; i<n;++i){
				cin>>a[i];
			}
			deque<int> dq;
			int j=0;
			int c=1;
			dq.pb(c);
			c++;
			while(j<n && c<=n){
				if(!dq.empty() && dq.back()==a[j]){
					dq.ppb();
					j++;
				}else{
					dq.pb(c);
					c++;
				}
			}
			while(!dq.empty() && dq.back()==a[j]){
				dq.ppb();
				j++;
			}
			if(dq.empty()){
				cout<<"Yes"<<'\n';
			}else{
				cout<<"No"<<'\n';
			}
		}
		cout<<'\n';
	}
	return 0;				
}
