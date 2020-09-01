#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

vector<string> toTokens(string a){
	char str[a.size()+1];
	strcpy(str,a.c_str());
	vector<string> tok;
	char* p=strtok(str," ");//mutiple delimeters
	while(p!=NULL){
		tok.pb(p);
		p=strtok(NULL, " ");
	}
	return tok;
}

int sortI;

bool cmp(vector<string> a,vector<string> b){
	return a[sortI]<b[sortI];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	string satr;
	getline(cin,satr);
	vector<string> atr=toTokens(satr);
	int n,m=atr.size();
	cin>>n;
	vector<vector<string>> arr(n,vector<string>(m));
	for(int i=0; i<n;++i){
		for(int y=0; y<m;++y){
			cin>>arr[i][y];
		}
	}
	int s;
	cin>>s;
	for(int i=0; i<s;++i){
		string t;
		cin>>t;
		auto it=find(atr.begin(),atr.end(),t);
		sortI=distance(atr.begin(),it);
		stable_sort(arr.begin(),arr.end(),cmp);
		cout<<satr<<'\n';
		for(int y=0; y<n;++y){
			for(int j=0; j<m;++j){
				cout<<arr[y][j]<<' ';
			}
			cout<<'\n';
		}
		if(i!=s-1)cout<<'\n';
	}
	return 0;				
}
