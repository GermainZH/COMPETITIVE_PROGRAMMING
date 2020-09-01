#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

ll ar[100001];
ll out[100001];

void countSort(ll arr[], int n, ll e){
	int count[10]={0};
	for(int i=0; i<n;++i){
		count[(arr[i]/e)%10]++;
	}
	for(int i=1;i<10;++i){
		count[i]+=count[i-1];
	}
	for(int i=n-1;i>=0;--i){
		out[count[(arr[i]/e)%10]-1]=arr[i];
		count[(arr[i]/e)%10]--;
	}
	for(int i=0; i<n;++i){
		arr[i]=out[i];
	}
}

void radixsort(ll arr[], int n, ll mx){
	for(ll e=1;mx/e>0;e*=10){
		countSort(arr,n,e);
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
		ll a,b,c,x,y;
		cin>>n>>a>>b>>c>>x>>y;
		ar[0]=a;
		ll mx=INT_MIN;
		for(int i=1; i<n;++i){
			ar[i]=(ar[i-1]*b+a)%c;
			mx=max(mx,ar[i]);
		}
		radixsort(ar, n, mx);
		ll v=0;
		for(int i=0; i<n;++i){
			v=(v*x+ar[i])%y;
		}
		cout<<v<<'\n';
	}
	return 0;				
}
