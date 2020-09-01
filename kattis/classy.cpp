#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

vector<string> toTokens(string a){
	char str[a.size()+1];
	strcpy(str,a.c_str());
	vector<string> tok;
	char* p=strtok(str,":- ");//mutiple delimeters
	while(p!=NULL){
		tok.pb(p);
		p=strtok(NULL, ":- ");
	}
	reverse(tok.begin(), tok.end());
	return tok;
}

bool cmp(vector<string> a, vector<string> b){
	int i=1,y=1;
	while(true){
		if(a[i]!=b[y]){
			return a[i]>b[y];
		}
		i++;
		y++;
		if(i==a.size()-1 && y==b.size()-1){
			return a[i]<b[y];
		}
		if(i==a.size()-1  && y<b.size()-1){
			if(b[y]=="middle"){
				while(b[y]=="middle"){
					y++;
					if(y==b.size()-1)return a[i]<b[y];
				}
			}
			if(b[y]=="upper"){
				return false;
			}
			if(b[y]=="lower"){
				return true;
			}
		}
		if(i<a.size()-1 && y==b.size()-1){
			if(a[i]=="middle"){
				while(a[i]=="middle"){
					i++;
					if(i==a.size()-1)return a[i]<b[y];
				}
			}
			if(a[i]=="upper"){
				return true;
			}
			if(a[i]=="lower"){
				return false;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<string>> vec(n);
		string s;
		getline(cin,s);
		for(int i=0; i<n;++i){
			getline(cin,s);
			vec[i]=toTokens(s);
		}
		sort(vec.begin(),vec.end(),cmp);
		for(int i=0; i<n;++i)
				cout<<vec[i][vec[i].size()-1]<<'\n';
		cout<<"=============================="<<'\n';
	}
	return 0;				
}
