#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,c=1;
	cin>>n;
	int a[n];
	cin>>a[0];
	for(int i=1; i<n;++i){
		int t;
		cin>>t;
		if(t>a[c-1]){
			a[c]=t;
			c++;
		}
	}
	cout<<c<<'\n';
	for(int i=0; i<c-1;++i){
		cout<<a[i]<<' ';
	}
	cout<<a[c-1]<<'\n';
	return 0;				
}
