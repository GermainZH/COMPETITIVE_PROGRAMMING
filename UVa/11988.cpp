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
	string a;
	while(cin>>a){
		vector<pair<string,char>> tok;
		string t;
		char curr=' ';
		for(int i=0; i<a.size();++i){
			if(a[i]=='['){
				tok.pb({t,curr});
				t.clear();
				curr='[';
			}else if(a[i]==']'){
				tok.pb({t,curr});
				t.clear();
				curr=']';
			}else{
				t+=a[i];
			}
		}
		if(!t.empty()){
			tok.pb({t,curr});
		}
		deque<string> dq;
		dq.pb(tok[0].first);
		for(int i=1; i<tok.size();++i){
			if(tok[i].second=='['){
				dq.pf(tok[i].first);
			}else if(tok[i].second==']'){
				dq.pb(tok[i].first);
			}
		}
		for(auto itr=dq.begin();itr!=dq.end();++itr){
			cout<<*itr;
		}
		cout<<'\n';
	}
	return 0;				
}
