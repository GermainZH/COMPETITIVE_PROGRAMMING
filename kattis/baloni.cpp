#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	int arr[1000001]={0};
	for(int i=0; i<n;++i){
		int pos;
		cin>>pos;
		if(arr[pos]==0){
			arr[pos-1]++;
		}else{
			arr[pos]--;
			arr[pos-1]++;
		}
	}
	int a=0;
	for(int i=0; i<1000001;++i){
		a+=arr[i];
	}
	cout<<a<<'\n';
	return 0;				
}
