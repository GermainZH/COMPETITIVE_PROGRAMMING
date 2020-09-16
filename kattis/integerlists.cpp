#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

deque<string> toTokens(string a){
	char str[a.size()+1];
	strcpy(str,a.c_str());
	deque<string> tok;
	char* p=strtok(str,"[,]");//mutiple delimeters
	while(p!=NULL){
		tok.pb(p);
		p=strtok(NULL, "[,]");
	}
	return tok;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	for(int i=0; i<n;++i){
		string a;
		cin>>a;
		int m;
		cin>>m;
		string tokens;
		cin>>tokens;
		deque<string> t=toTokens(tokens);
		bool fb=true;
		bool bf=false;
		for(int y=0; y<a.size();++y){
			if(a[y]=='R'){
				fb=!fb;
			}else if(a[y]=='D'){
				if(t.empty()){
					cout<<"error"<<'\n';
					bf=true;
					break;
				}
				if(fb){
					t.ppf();
				}else{
					t.ppb();
				}
			}
		}
		if(!bf){
			if(t.empty()){
				cout<<"[]"<<'\n';
			}else if(fb){
				auto itr=t.begin();
				cout<<'['<<*itr;
				for(itr=t.begin()+1;itr!=t.end();++itr){
					cout<<','<<*itr;
				}
				cout<<']'<<'\n';
			}else{
				auto itr=t.rbegin();
				cout<<'['<<*itr;
				for(itr=t.rbegin()+1;itr!=t.rend();++itr){
					cout<<','<<*itr;
				}
				cout<<']'<<'\n';
			}
		}
	}
	return 0;				
}
