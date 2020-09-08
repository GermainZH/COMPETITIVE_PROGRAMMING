#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

deque<int> dq;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	for(int i=0; i<n;++i){
		int t;
		cin>>t;
		if(!dq.empty() && (dq.back()+t)%2==0){
			dq.ppb();
		}else{
			dq.pb(t);
		}
	}
	cout<<dq.size()<<'\n';	
	return 0;				
}
