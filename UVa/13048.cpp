#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	for(int i=1; i<=t;++i){
		char s[51];
		int o=0;
		cin>>s;
		int n=strlen(s);
		for(int y=0; y<n;++y){
			if(s[y]=='-' && s[y+1]!='B' && s[y+2]!='B' && s[y+1]!='S'){
				if(y>=1 && s[y-1]!='S'){
					o++;
					s[y]='X';
				}else if(y==0){
					o++;
					s[y]='X';
				}
			}
		}
		cout<<"Case "<<i<<": "<<o<<'\n';
	}
	return 0;				
}
