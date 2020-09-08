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
	deque<string> dq;
	for(int i=0;i<n;++i){
		string t;
		cin>>t;
		if(t=="Sleep"){
			string s;
			cin>>s;
			dq.pb(s);
		}else if(t=="Test"){
			if(dq.empty()){
				cout<<"Not in a dream"<<'\n';
			}else{
				cout<<dq.back()<<'\n';
			}
		}else if(!dq.empty()){
			dq.ppb();
		}
	}
	return 0;				
}
