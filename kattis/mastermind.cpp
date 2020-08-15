#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	string c1,c2;
	cin>>c1>>c2;
	string s1,s2;
	int r=0,s=0;
	for(int i=0; i<n;++i){
		if(c1[i]==c2[i]){
			r++;
		}else{
			s1.pb(c1[i]);
			s2.pb(c2[i]);
		}
	}
	while(!s2.empty()){
		int p=s1.find(s2[0]);
		if(p>=0){
			s++;
			s1.erase(s1.begin()+p);
		}
		s2.erase(s2.begin());
	}
	cout<<r<<' '<<s<<'\n';
	return 0;				
}
