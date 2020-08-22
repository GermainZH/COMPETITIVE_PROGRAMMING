#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int findCost(vector<string> a,vector<string>b){
	int cost=0;
	for(int i=0; i<a.size();++i){
		if(a[i]!=b[i])cost++;
	}
	return cost;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	string q;
	getline(cin,q);
	int n;
	cin>>n;
	string t;
	getline(cin,t);
	string line[n];
	vector<vector<string>> keys(n);
	for(int i=0; i<n;++i){
		getline(cin,line[i]);
		stringstream ss(line[i]);
		string tok;
		while(getline(ss,tok,',')){
			keys[i].pb(tok);
		}
	}
	int minV=INT_MAX;
	int change[100]={0};
	for(int i=0; i<n;++i){
		for(int y=0; y<n;++y){
			change[i]=max(change[i],findCost(keys[i],keys[y]));	
		}
		minV=min(minV,change[i]);
	}
	for(int i=0; i<n;++i){
		if(change[i]==minV){
			cout<<line[i]<<'\n';
		}
	}
	return 0;				
}
