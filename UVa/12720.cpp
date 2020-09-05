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
	int t;
	cin>>t;
	for(int c=1;c<=t;++c){
		string str;
		cin>>str;
		int l=str.size();
		int m1=l/2;
		int m2=l/2-1;
		ll s=0;
		for(int i=0; i<l;++i){
			s<<=1;
			if((l-i)%2){
				if(l-m1>m2){
					s|=str[m1]-'0';
					m1++;
				}else{
					s|=str[m2]-'0';
					m2--;
				}
			}else{
				if(str[m1]>str[m2]){
					s|=str[m1]-'0';
					m1++;
				}else{
					s|=str[m2]-'0';
					m2--;
				}
			}
			s%=1000000007;
		}
		cout<<"Case #"<<c<<": "<<s<<'\n';
	}
	return 0;				
}
