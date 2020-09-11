#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int pres(char a){
	if(a=='*'||a=='/'){
		return 2;
	}else{
		return 1;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	string s;
	getline(cin,s);
	getline(cin,s);
	deque<char> stack;
	while(n--){
		stack.clear();
		while(getline(cin,s)){
			if(s.empty()){
				break;
			}
			if(isdigit(s[0])){
				cout<<s;
			}else if(s[0]=='('){
				stack.pb(s[0]);
			}else if(s[0]==')'){
				while(stack.back()!='('){
					cout<<stack.back();
					stack.ppb();
				}
				stack.ppb();
			}else{
				while(!stack.empty() && stack.back()!='(' && pres(s[0])<=pres(stack.back())){
					cout<<stack.back();
					stack.ppb();
				}
				stack.pb(s[0]);
			}
		}
		while(!stack.empty()){
			cout<<stack.back();
			stack.ppb();
		}
		cout<<'\n';
		if(n)cout<<'\n';
	}
	return 0;				
}
