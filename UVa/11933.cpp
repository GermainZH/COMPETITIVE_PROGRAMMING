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
	int n;
	while(cin>>n && n){
		int a=0,b=0,i=0,j=0;
		while(n>0){
			if(n&1){
				if(j%2){
					b|=(1<<i);
				}else{
					a|=(1<<i);
				}
				j++;
			}
			n>>=1;
			i++;
		}
		cout<<a<<' '<<b<<'\n';
	}
	return 0;				
}
