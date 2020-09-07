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
		string a(32,'?');
		for(int i=0; i<n;++i){
			string p;
			cin>>p;
			if(p=="AND" || p=="OR"){
				int x,y;
				cin>>x>>y;
				if(p=="AND"){
					if(a[x]=='0'||a[y]=='0'){
						a[x]='0';
					}else if(a[x]=='?'|| a[y]=='?'){
						a[x]='?';
					}
				}else{
					if(a[x]=='1'||a[y]=='1'){
						a[x]='1';
					}else if(a[x]=='?' || a[y]=='?'){
						a[x]='?';
					}
				}
			}else{
				int x;
				cin>>x;
				if(p=="CLEAR"){
					a[x]='0';
				}else{
					a[x]='1';
				}
			}
		}
		reverse(a.begin(),a.end());
		cout<<a<<'\n';
	}
	return 0;				
}
