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
	string a;
	getline(cin,a);
	while(n--){
		getline(cin,a);
		list<char> ls;
		auto itr=ls.begin();
		for(int i=0; i<a.size();++i){
			if(a[i]=='['){
				itr=ls.begin();
			}else if(a[i]==']'){
				itr=ls.end();
			}else if(a[i]=='<'&&itr!=ls.begin()&&!ls.empty()){
				auto itr2=itr;
				ls.erase(--itr2);
			}else if(a[i]!='<'){
				ls.insert(itr,a[i]);
			}
		}
		for(itr=ls.begin();itr!=ls.end();++itr){
			cout<<*itr;
		}
		cout<<'\n';
	}
	
	return 0;				
}
