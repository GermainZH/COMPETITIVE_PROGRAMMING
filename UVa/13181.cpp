#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	string s;
	while(cin>>s){
		int maxl=0,l=0;
		for(int i=0; i<s.size();++i){
			if(s.at(i)=='.'){
				l++;
				maxl=max(maxl,l);
			}else{
				l=0;
			}
		}
		//corner case
		int maxc=0,start=0, end=0;
		for(int i=0; i<s.size();++i){
			if(s.at(i)=='X')break;
			start++;
		}
		for(int i=s.size()-1;i>=0;--i){
			if(s.at(i)=='X')break;
			end++;
		}
		maxc=max(start,end)-1;
		if(maxl%2==0 && (maxl-2)/2>maxc){
			cout<<(maxl-2)/2<<'\n';
		}else if(maxl%2==1 && (maxl-1)/2>maxc){
			cout<<(maxl-1)/2<<'\n';
		}else{
			cout<<maxc<<'\n';
		}
	}
	return 0;				
}
