#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,t,m;
	cin>>n>>t>>m;
	string arr[12][2];
	for(int i=0; i<12;++i){
		arr[i][0]="-";
		arr[i][1]="-";
	}
	bool check[12][100]={false};
	for(int i=0; i<m;++i){
		string s,v;
		char p;
		int id;
		cin>>s>>id>>p>>v;
		if(v=="Yes" && !check[p-65][id-1]){
			check[p-65][id-1]=true;
			arr[p-65][0]=s;
			arr[p-65][1]=to_string(id);
		}
	}
	for(int i=0; i<n;++i){
		cout<<(char)('A'+i)<<' '<<arr[i][0]<<' '<<arr[i][1]<<'\n';
	}
	return 0;				
}
