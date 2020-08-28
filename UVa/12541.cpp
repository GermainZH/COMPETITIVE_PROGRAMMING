#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

struct Person{
	string name;
	int d,m,y;
};

bool comp(Person a, Person b){
	if(a.y==b.y && a.m==b.m)
		return a.d>b.d;
	if(a.y==b.y)
		return a.m>b.m;
	return a.y>b.y;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	Person arr[n];
	for(int i=0; i<n;++i){
		cin>>arr[i].name>>arr[i].d>>arr[i].m>>arr[i].y;
	}
	sort(arr,arr+n,comp);
	cout<<arr[0].name<<'\n';
	cout<<arr[n-1].name<<'\n';
	return 0;				
}
