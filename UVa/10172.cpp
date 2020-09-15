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
	int t;
	cin>>t;
	while(t--){
		int n,c,q;
		cin>>n>>c>>q;
		vector<deque<int>> que(n);
		deque<int> st;
		for(int i=0; i<n;++i){
			int a;
			cin>>a;
			for(int y=0; y<a;++y){
				int b;
				cin>>b;
				que[i].pb(b);
			}
		}
		int m=0;
		int i=0;
		while(true){
			while(!st.empty()){
				if(st.back()==i+1){
					st.ppb();
					++m;
				}else if(que[i].size()<q){
					++m;
					que[i].pb(st.back());
					st.ppb();
				}else{
					break;
				}
			}
			while(st.size()<c && !que[i].empty()){
				st.pb(que[i].front());
				que[i].ppf();
				++m;
			}
			bool bf=true;
			for(int y=0; y<n;++y){
				if(!que[y].empty()){
					bf=false;
				}
			}
			if(bf && st.empty()){
				break;
			}
			++i;
			m+=2;
			if(i==n){
				i=0;
			}
		}
		cout<<m<<'\n';
	}
	return 0;				
}
