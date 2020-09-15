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
	cin>>n;
	vector<list<string>> s(n);
	for(int i=0; i<n;++i){
		string t;
		cin>>t;
		s[i].pb(t);
	}
	for(int i=0; i<n-1;++i){
		int a,b;
		cin>>a>>b;
		s[a-1].splice(s[a-1].end(),s[b-1]);
	}
	for(int i=0; i<n;++i){
		for(auto itr=s[i].begin();itr!=s[i].end();++itr){
			cout<<*itr;
		}
	}
	cout<<'\n';
	return 0;				
}
