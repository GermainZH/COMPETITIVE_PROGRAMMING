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
	string s;
	while(getline(cin,s)){
		deque<string> track;
		int num=0;
		bool br=true;
		for(int i=0; i<s.size();++i){
			if(s[i]!=' '){
				num++;
			}
			if(s[i]=='('||s[i]=='{'||s[i]=='['||s[i]=='<'){
				if(i<s.size()-1 && s[i]=='(' && s[i+1]=='*'){
					track.pb(s.substr(i,2));
					++i;
				}else{
					track.pb(s.substr(i,1));
				}
			}else if(!track.empty() && ((s[i]==')'&&track.back()=="(")||(s[i]=='}'&&track.back()=="{")||(s[i]==']'&&track.back()=="[")||(s[i]=='>'&&track.back()=="<"))){
				track.ppb();	
			}else if(!track.empty() && i<s.size()-1 && s.substr(i,2)=="*)" && "(*"==track.back()){
				track.ppb();
				++i;
			}else if((s[i]==')'||s[i]=='}'||s[i]==']'||s[i]=='>')||(i<s.size()-1 && s.substr(i,2)=="*)")){
				br=false;
				break;
			}
			//for(int y=0; y<track.size();++y){
			//	cout<<track[y]<<' ';
			//}
			//cout<<'\n';
		}
		if(track.empty() && br){
			cout<<"YES"<<'\n';
		}else if(!track.empty() && br){
			cout<<"NO "<<num+1<<'\n';
		}else{
			cout<<"NO "<<num<<'\n';
		}
	}
	return 0;				
}
