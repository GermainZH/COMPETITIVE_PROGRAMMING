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
	int n,k;
	cin>>n>>k;
	deque<int> track;
	for(int i=0; i<k;++i){
		string t;
		cin>>t;
		if(t=="undo"){
			int j;
			cin>>j;
			for(int y=0; y<j;++y){
				track.ppb();
			}
		}else{
			track.pb(stoi(t));
		}
	}
	int pos=0;
	for(int i=0; i<track.size();++i){
		if(pos+track[i]>=(n-1)){
			pos+=track[i];
			pos%=n;
		}else if(pos+track[i]<0){
			track[i]%=n;
			pos+=track[i];
			if(pos<0)pos=n+pos;
		}else{
			pos+=track[i];
		}
	}
	cout<<pos<<'\n';
	return 0;				
}
