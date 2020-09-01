#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
int n,m;

bool cmp(int a, int b){
	if(a%m!=b%m)return a%m<b%m;
	if(a%2==0 && b%2==0)return a<b;
	if(a%2!=0 && b%2!=0)return a>b;
	if(abs(a%2)==1)return true;
	return false;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	while(cin>>n>>m && n+m!=0){
		int arr[n];
		for(int i=0; i<n;++i){
			cin>>arr[i];
		}
		sort(arr,arr+n,cmp);
		cout<<n<<' '<<m<<'\n';
		for(int i=0; i<n;++i){
			cout<<arr[i]<<'\n';
		}
	}
	cout<<n<<' '<<m<<'\n';
	return 0;				
}
