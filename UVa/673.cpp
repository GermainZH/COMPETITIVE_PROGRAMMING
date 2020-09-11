#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

deque<char> dq;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	string t;
	getline(cin,t);
	for(int i=0; i<n;++i){
		dq.clear();
		string s;
		getline(cin,s);
		bool f=true;
		for(int y=0; y<s.size();++y){
			if(s[y]=='('||s[y]=='['){
				dq.pb(s[y]);
			}else if(!dq.empty() && s[y]==')'&&dq.back()=='('){
				dq.ppb();
			}else if(!dq.empty() && s[y]==']'&&dq.back()=='['){
				dq.ppb();
			}else if(s[y]==']' || s[y]==')'){
				f=false;
				break;
			}
		}
		if(f && dq.empty()){
			cout<<"Yes"<<'\n';
		}else{
			cout<<"No"<<'\n';
		}
	}
	return 0;				
}
