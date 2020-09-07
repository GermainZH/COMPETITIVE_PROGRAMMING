#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int arr[1000];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	for(int i=0; i<n;++i){
		for(int y=0; y<n;++y){
			int t;
			cin>>t;
			arr[i]|=t;
			arr[y]|=t;
		}
	}
	for(int i=0; i<n-1;++i){
		cout<<arr[i]<<' ';
	}
	cout<<arr[n-1]<<'\n';
	return 0;				
}
