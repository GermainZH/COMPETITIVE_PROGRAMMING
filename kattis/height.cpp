#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int insertionSort(int arr[],int n){
	int c=0;
	for (int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
			c++;
		}
		arr[j+1]=key;
	}
	return c;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int p;
	cin>>p;
	while(p--){
		int k;
		cin>>k;
		int arr[20];
		for(int i=0; i<20;++i){
			cin>>arr[i];
		}
		cout<<k<<' '<<insertionSort(arr, 20)<<'\n';
	}
	return 0;				
}
