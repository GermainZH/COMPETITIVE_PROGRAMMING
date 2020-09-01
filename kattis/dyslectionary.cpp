#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

vector<string> dict;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	string s;
	int l=0;
	while(getline(cin,s)){
		if(s.empty()){
			sort(dict.begin(),dict.end());
			for(int i=0; i<dict.size();++i){
				int n=dict[i].size();
				for(int y=0; y<l-n;++y){
					dict[i]+=" ";
				}
				reverse(dict[i].begin(),dict[i].end());
				cout<<dict[i]<<'\n';
			}
			l=0;
			dict.clear();
			cout<<'\n';
		}else{
			l=max(l,(int)s.size());
			reverse(s.begin(),s.end());
			dict.pb(s);
			sort(dict.begin(),dict.end());
		}
	}
	sort(dict.begin(),dict.end());
	for(int i=0; i<dict.size();++i){
		int n=dict[i].size();
		for(int y=0; y<l-n;++y){
			dict[i]+=" ";
		}
		reverse(dict[i].begin(),dict[i].end());
		cout<<dict[i]<<'\n';
	}
	return 0;				
}
