#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int arr[200001];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n, t;
	cin>>n>>t;
	unordered_map<int,int> um;
	for(int i=0; i<n;++i){
		cin>>arr[i];
		um[arr[i]]++;
	}
	bool bf=false;
	if(t==1){
		for(int i=0; i<n;++i){
			if(um.find(7777-arr[i])!=um.end()){
				cout<<"Yes";
				bf=true;
				break;
			}
		}
		if(!bf){
			cout<<"No";
		}
	}else if(t==2){
		for(int i=0; i<n;++i){
			if(um[arr[i]]>1){
				cout<<"Contains duplicate";
				bf=true;
				break;
			}
		}
		if(!bf){
			cout<<"Unique";
		}
	}else if(t==3){
		for(int i=0; i<n;++i){
			if(um[arr[i]]>(double)n/2){
				cout<<arr[i];
				bf=true;
				break;
			}
		}
		if(!bf){
			cout<<-1;
		}
	}else if(t==4){
		sort(arr,arr+n);
		if(n%2==1){
			cout<<arr[n/2];
		}else{
			cout<<arr[(n/2)-1]<<' '<<arr[n/2];
		}
	}else{
		sort(arr,arr+n);
		for(int i=0; i<n;++i){
			if(arr[i]>=100 && arr[i]<=999){
				cout<<arr[i]<<' ';
			}
		}
	}
	cout<<'\n';
	return 0;				
}
