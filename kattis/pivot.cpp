#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int arr[100001];
bool valid[100001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	int max=0,min=100000;
	for(int i=0; i<n;++i){
		cin>>arr[i];
		if(max<=arr[i]){
			valid[i]=true;
			max=arr[i];
		}else{
			valid[i]=false;
		}
	}
	for(int i=n-1;i>=0;--i){
		if(min>=arr[i]){
			min=arr[i];
		}else{
			valid[i]=false;
		}
	}
	int c=0;
	for(int i=0; i<n;++i){
		if(valid[i]){
			c++;
		}
	}
	cout<<c<<'\n';
	return 0;				
}
