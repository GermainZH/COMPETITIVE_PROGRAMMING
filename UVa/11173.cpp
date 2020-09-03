#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int N;
	cin>>N;
	while(N--){
		int n,k;
		cin>>n>>k;
		int o=k^(k>>1);
		cout<<o<<'\n';
	}
	return 0;				
}
