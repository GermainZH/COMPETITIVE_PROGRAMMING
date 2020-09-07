#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int s[30];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	for(int i=1; i<=t;++i){
		int n,k;
		cin>>n>>k;
		int fill=(1<<n);
		if((k-fill+1)%fill==0){
			cout<<"Case #"<<i<<": ON";
		}else{
			cout<<"Case #"<<i<<": OFF";
		}
		cout<<'\n';
	}
	return 0;				
}
