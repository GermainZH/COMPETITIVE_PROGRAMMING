#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

struct team{
	int id=0,qs=0,time=0;
};

bool cmp(team a, team b){
	if(a.qs>b.qs)return true;
	if(a.qs==b.qs && a.time<b.time)return true;
	if(a.qs==b.qs && a.time==b.time && a.id<b.id)return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int t;
	cin>>t;
	string c;
	getline(cin,c);
	getline(cin,c);
	while(t--){
		string s;
		pair<int,bool> questions[100][9]={make_pair(0, false)};
		team teams[100];
		while(getline(cin,s) && !s.empty()){
			int id,q,time;
			char r;
			stringstream ss(s);
			ss>>id>>q>>time>>r;
			teams[id-1].id=id;
			if(r=='I' && !questions[id-1][q-1].second){
				questions[id-1][q-1].first+=20;
			}else if(r=='C' && !questions[id-1][q-1].second){
				questions[id-1][q-1].first+=time;
				questions[id-1][q-1].second=true;
				teams[id-1].qs++;
				teams[id-1].time+=questions[id-1][q-1].first;
			}
		}
		sort(teams,teams+100,cmp);
		for(int i=0; i<100;++i){
			if(teams[i].id){
				cout<<teams[i].id<<' '<<teams[i].qs<<' '<<teams[i].time<<'\n';
			}
		}
		if(t)cout<<'\n';
	}
	return 0;				
}
