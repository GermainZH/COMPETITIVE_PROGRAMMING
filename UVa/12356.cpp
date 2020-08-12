#include <bits/stdc++.h>

using namespace std;

int l[100001],r[100001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int s,b;
	while(cin>>s>>b && s+b!=0){
		for(int i=1;i<=s;++i){
			l[i]=i-1;
			r[i]=i+1;
		}
		l[1]=-1;
		r[s]=-1;
		while(b--){
			int lp,rp;
			cin>>lp>>rp;
			if(l[lp]==-1){
				cout<<"* ";
			}else{
				cout<<l[lp]<<" ";
			}
			if(r[rp]==-1){
				cout<<"*";
			}else{
				cout<<r[rp];
			}
			r[l[lp]]=r[rp];
			l[r[rp]]=l[lp];
			cout<<'\n';
		}
		cout<<'-'<<'\n';
	}
	return 0;				
}
