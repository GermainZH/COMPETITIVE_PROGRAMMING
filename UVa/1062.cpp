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
	int c=1;
	string s;
	while(cin>>s && s!="end"){
		vector<deque<char>> stacks;
		int i=0;
		stacks.pb(deque<char>({s[i]}));
		for(i=1; i<s.size();++i){
			int y;
			for(y=0; y<stacks.size();++y){
				if(stacks[y].back()>=s[i]){
					stacks[y].pb(s[i]);
					break;
				}
			}
			if(y==stacks.size()){
				stacks.pb(deque<char>({s[i]}));
			}
		}
		cout<<"Case "<<c<<": "<<stacks.size()<<'\n';
		c++;
	}
	return 0;				
}
