#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n!=0){
		string s[n];
		int c=0;
		for(int i=0; i<n;++i){
			string k,t;
			cin>>k>>t;
			int m=t.size();
			while(m){
				if(s[c]==""){
					m--;
				}
				if(m==0){
					break;
				}
				c++;
				if(c>=n){
					c-=n;
				}
			}
			s[c]=k;
		}
		for(int i=0; i<n-1;++i){
			cout<<s[i]<<' ';
		}
		cout<<s[n-1]<<'\n';
	}
	return 0;				
}
