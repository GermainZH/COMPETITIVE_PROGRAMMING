#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	string n,m;
	cin>>n>>m;
	if(m.size()==1){
		cout<<n<<'\n';
	}else if(n.size()==m.size()){
		cout<<n.at(0)<<'.';
		int i;
		for(i=n.size()-1;i>=0;--i){
			if(n.at(i)=='.'){
				i--;
				break;
			}
			if(n.at(i)!='0'){
				break;
			}
		}
		cout<<n.substr(1,i+1)<<'\n';
	}else if(n.size()>m.size()){
		n.insert(n.size()-(m.size()-1),".");
		int i;
		for(i=n.size()-1;i>=0;--i){
			if(n.at(i)=='.'){
				i--;
				break;
			}
			if(n.at(i)!='0'){
				break;
			}
		}
		cout<<n.substr(0,i+1)<<'\n';
	}else{
		cout<<"0.";
		int l=m.size()-1-n.size();
		for(int i=0; i<l;++i){
			cout<<0;
		}
		int i;
		for(i=n.size()-1;i>=0;--i){
			if(n.at(i)=='.'){
				i--;
				break;
			}
			if(n.at(i)!='0'){
				break;
			}
		}
		cout<<n.substr(0,i+1)<<'\n';
	}
	return 0;				
}
