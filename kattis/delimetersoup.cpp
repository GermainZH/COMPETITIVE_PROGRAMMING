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
	deque<char> s;
	string d;
	getline(cin,d);
	getline(cin,d);
	bool f=true;
	for(int i=0; i<n;++i){
		if(d[i]=='('||d[i]=='['||d[i]=='{'){
			s.pb(d[i]);
		}else if(!s.empty()&&(d[i]==')'||d[i]==']'||d[i]=='}')){
			if((d[i]==')'&&s.back()=='(')||(d[i]==']'&&s.back()=='[')||(d[i]=='}'&&s.back()=='{')){
				s.ppb();
			}else{
				cout<<d[i]<<' '<<i<<'\n';
				f=false;
				break;
			}
		}else if(s.empty()&&(d[i]==')'||d[i]==']'||d[i]=='}')){
			cout<<d[i]<<' '<<i<<'\n';
			f=false;
			break;
		}
	}
	if(f){
		cout<<"ok so far"<<'\n';
	}
	return 0;				
}
