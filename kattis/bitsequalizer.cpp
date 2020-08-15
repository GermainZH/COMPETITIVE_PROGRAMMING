#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int c;
	cin>>c;
	for(int i=1; i<=c;++i){
		string s,t;
		cin>>s>>t;
		int ones=0,zeroes=0,qones=0,qzeroes=0;
		for(int y=0; y<s.size();++y){
			if(s.at(y)=='1' && t.at(y)!='1'){
				ones++;
			}else if(s.at(y)=='0' && t.at(y)!='0'){
				zeroes++;
			}else if(s.at(y)=='?' && t.at(y)=='1'){
				qones++;
			}else if(s.at(y)=='?' && t.at(y)=='0'){
				qzeroes++;
			}
		}
		if(zeroes>ones){
			cout<<"Case "<<i<<": "<<qones+qzeroes+zeroes<<'\n';
		}else if(ones==zeroes){
			cout<<"Case "<<i<<": "<<qones+qzeroes+zeroes<<'\n';
		}else if(ones>zeroes && ones-zeroes<=qones){
			cout<<"Case "<<i<<": "<<qones+qzeroes+ones<<'\n';
		}else{
			cout<<"Case "<<i<<": "<<-1<<'\n';
		}
	}
	return 0;				
}
