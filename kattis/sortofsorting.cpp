#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

bool cmp(string a, string b){
	return a.substr(0,2)<b.substr(0,2);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n){
		string clear;
		getline(cin,clear);
		string names[n];
		for(int i=0; i<n;++i){
			getline(cin,names[i]);
		}	
		stable_sort(names,names+n,cmp);
		for(int i=0; i<n;++i){
			cout<<names[i]<<'\n';
		}
		cout<<'\n';
	}
	return 0;				
}
