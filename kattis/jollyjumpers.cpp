#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n){
		int arr[n];
		bool b[n]={false};
		for(int i=0; i<n;++i){
			cin>>arr[i];
		}
		for(int i=0; i<n-1;++i){
			if(abs(arr[i]-arr[i+1])<n) b[(abs(arr[i]-arr[i+1]))]=true;
		}
		int i;
		for(i=1; i<n;++i){
			if(!b[i]){
				break;
			}
		}
		if(i==n){
			cout<<"Jolly"<<'\n';
		}else{
			cout<<"Not jolly"<<'\n';
		}
	}
	return 0;				
}
