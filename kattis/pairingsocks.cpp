#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	deque<int> og;
	deque<int> aux;
	for(int i=0; i<2*n;++i){
		int t;
		cin>>t;
		og.pb(t);
	}
	int m=0;
	while(!og.empty()){
		if(aux.empty()){
			aux.pb(og.back());
			og.ppb();
		}else if(aux.back()==og.back()){
			aux.ppb();
			og.ppb();
		}else{
			aux.pb(og.back());
			og.ppb();
		}
		m++;
	}
	if(aux.size()){
		cout<<"impossible"<<'\n';
	}else{
		cout<<m<<'\n';
	}
	return 0;				
}
