#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

bool cmp(pair<string,int> a, pair<string,int> b){
	return a.second<b.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	while(t--){
		string c;
		getline(cin,c);
		int n,m;
		cin>>m>>n;
		pair<string,int> s[n];
		for(int i=0; i<n;++i){
			cin>>s[i].first;
			string temp(m,' ');
			int swaps=0;
			for(int y=0; y<m-1;++y){
				for(int j=y+1;j<m;++j){
					if(s[i].first[y]>s[i].first[j])swaps++;
				}
			}
			s[i].second=swaps;
		}
		stable_sort(s,s+n,cmp);
		for(int i=0; i<n;++i){
			cout<<s[i].first<<'\n';
		}
		if(t)cout<<'\n';
	}
	return 0;				
}
