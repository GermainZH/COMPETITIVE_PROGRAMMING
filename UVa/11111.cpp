#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

vector<int> toTokens(string a){
	char str[a.size()+1];
	strcpy(str,a.c_str());
	vector<int> tok;
	char* p=strtok(str," ");//mutiple delimeters
	while(p!=NULL){
		tok.pb(atoi(p));
		p=strtok(NULL, " ");
	}
	return tok;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	string s;
	vector<int> tokens;
	deque<pair<int,int>> stack;
	while(getline(cin,s)){
		tokens=toTokens(s);
		reverse(tokens.begin(),tokens.end());
		stack.clear();
		if(tokens.size() & 1||tokens.size()<2){
            cout<<":-( Try again."<<'\n';
            continue;
        }
		bool f=true;
		for(int i=0; i<tokens.size();++i){
			if(stack.empty() && tokens[i]>0){
				stack.pb({tokens[i],tokens[i]});
			}else if(!stack.empty() && tokens[i]>0 && stack.back().second>tokens[i]){
				stack.back().second-=tokens[i];
				stack.pb({tokens[i],tokens[i]});
			}else if(!stack.empty() && tokens[i]<0 && abs(tokens[i])==stack.back().first){
				stack.ppb();
			}else{
				f=false;
				break;
			}
			//for(int y=0; y<stack.size();++y){
			//	cout<<stack[y].second<<' ';
			//}
			//cout<<'\n';
		}
		if(f){
			cout<<":-) Matrioshka!"<<'\n';
		}else{
			cout<<":-( Try again."<<'\n';
		}
	}
	return 0;				
}
