#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int arr[5];
	for(int i=0; i<5;++i){
		cin>>arr[i];
	}
	for(int i=0; i<5;++i){
		for(int y=0; y<5-i-1;++y){
			if(arr[y]>arr[y+1]){
				swap(arr[y],arr[y+1]);
				cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<' '<<arr[3]<<' '<<arr[4]<<'\n';
			}
		}
	}
	return 0;				
}
