#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n){
		string arr[n];
		for(int i=0; i<n;++i){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		string a=arr[n/2-1];
		string b=arr[n/2];
		string s;
		int y=0;
		while(true){
			bool bf=false;
			for(char i='A';i<='Z';++i){
				if(s+i>=a && s+i<b){
					s.pb(i);
					bf=true;
					break;
				}
			}
			if(!bf){
				s.pb(a.at(y));
				if(s>=a && s<b){
					break;
				}
				y++;
			}else{
				break;
			}
		}
		cout<<s<<'\n';
	}
	return 0;				
}
