#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

deque<int> s;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	if(n<=2){
		cout<<0<<'\n';
	}else{
		int mx=0;
		for(int i=0; i<n;++i){
			int t;
			cin>>t;
			if(s.empty()){
				s.pb(t);
			}else if(t<s.front()){
				s.pb(t);
			}else if(t>=s.front()){
				while(!s.empty()){
					mx=max(mx,s.front()-s.back());
					s.ppb();
				}
				s.pb(t);
			}
		}
		if(s.size()>1){
			int start=s[s.size()-1];
			for(int i=s.size()-2;i>=0;--i){
				if(s[i]>=start){
					start=s[i];
				}else{
					mx=max(mx,start-s[i]);
				}
			}
		}
		cout<<mx<<'\n';			
	}
	return 0;				
}
