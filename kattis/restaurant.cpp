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
	bool f=true;
	while(cin>>n && n){
		if(!f){
			cout<<'\n';
		}else{
			f=false;
		}
		deque<int> s1;
		deque<int> s2;
		for(int i=0; i<n;++i){
			string s;
			int t;
			cin>>s>>t;
			if(s=="DROP"){
				for(int i=0; i<t;++i){
					s2.pb(i);
				}
				cout<<"DROP 2 "<<t<<'\n';
			}else if(s=="TAKE" && s1.size()>=t){
				for(int y=0; y<t;++y){
					s1.ppb();
				}
				cout<<"TAKE 1 "<<t<<'\n';
			}else{
				int s1s=s1.size();
				if(s1s){
					cout<<"TAKE 1 "<<s1s<<'\n';
				}
				for(int y=0; y<s1s;++y){
					s1.ppb();
					t--;
				}
				cout<<"MOVE 2->1 "<<s2.size()<<'\n';
				int s2s=s2.size();
				for(int y=0; y<s2s;++y){
					s1.pb(s2.back());
					s2.ppb();
				}
				for(int y=0; y<t;++y){
					s1.ppb();
				}
				cout<<"TAKE 1 "<<t<<'\n';
			}
		}
	}
	return 0;				
}
