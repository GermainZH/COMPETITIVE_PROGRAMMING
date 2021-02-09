#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back
#define p push
#define pp pop

bool isValid(string num){
	map<char,string> keys ={
		{'1',"1234567890"},
		{'2',"2356890"},
		{'3',"369"},
		{'4',"4567890"},
		{'5',"56890"},
		{'6',"69"},
		{'7',"7890"},
		{'8',"890"},
		{'9',"9"},
		{'0',"0"}
	};
	for(int i=0; i<num.size()-1;++i){
		string temp=keys[num[i]];
		bool flag=false;
		for(int y=0; y<temp.size();++y){
			if(temp[y]==num[i+1]){
				flag=true;
				break;
			}
		}
		if(!flag){
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<string> vec;
	for(int i=0; i<1000;++i){
		string num=to_string(i);
		if(isValid(num)){
			vec.pb(num);
		}
	}
	for(auto t: vec){
		cout<<t<<'\n';
	}
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		int m=INT_MAX;
		for(int i=0; i<vec.size();++i){
			if(abs(k-m)>abs(k-stoi(vec[i]))){
				m=stoi(vec[i]);
			}
		}
		cout<<m<<'\n';
	}
	return 0;				
}
