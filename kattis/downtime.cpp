#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,k,t;
	cin>>n>>k;
	vector<int> v;
	for(int i=0; i<n;++i){
		cin>>t;
		v.push_back(t);
		if(t-v[0]>=1000)v.erase(v.begin());
	}
	cout<<ceil((double)v.size()/k)<<'\n';
	return 0;				
}
