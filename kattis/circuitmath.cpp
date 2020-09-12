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
	char b[n];
	for(int i=0; i<n;++i){
		cin>>b[i];
	}
	deque<char> s;
	char c;
	while(cin>>c){
		if(c=='*'||c=='+'||c=='-'){
			char j=s.back();
			s.ppb();
			if(c=='*'){
				char k=s.back();
				s.ppb();
				if(j=='T'&&k=='T'){
					s.pb('T');
				}else{
					s.pb('F');
				}
			}else if(c=='+'){
				char k=s.back();
				s.ppb();
				if(j=='T'||k=='T'){
					s.pb('T');
				}else{
					s.pb('F');
				}
			}else{
				if(j=='T'){
					s.pb('F');
				}else{
					s.pb('T');
				}
			}
		}else{
			s.pb(b[c-'A']);
		}
	}
	cout<<s.back()<<'\n';
	return 0;				
}
