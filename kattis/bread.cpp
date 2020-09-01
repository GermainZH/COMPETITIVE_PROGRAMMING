#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int a[100001];
int t[100001];
unordered_map<int,int> um;

ll merge(int arr[], int temp[], int l, int m, int r) {
	int i=l, j=m, k=l;
	ll count = 0;
	while ((i<=m-1)&&(j<=r)){
		if (um[arr[i]]<=um[arr[j]]){
			temp[k++]=arr[i++];
		}else{
			temp[k++]=arr[j++];
			count+=(m-i);
		}
	}
	while (i<=m-1)
		temp[k++]=arr[i++];
	while (j<=r)
		temp[k++]=arr[j++];
	for (i=l;i<=r;i++)
		arr[i]=temp[i];
	return count;
}

ll mergeSort(int arr[],int temp[],int l,int r){
	ll count = 0;
	if (r>l) {
		int m=l+(r-l)/2;
		count=mergeSort(arr, temp, l, m);
		count+=mergeSort(arr, temp, m+1, r);
		count+=merge(arr, temp, l, m+1, r);
	}
	return count;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	for(int i=0; i<n;++i){
		cin>>a[i];
	}
	for(int i=0; i<n;++i){
		int b;
		cin>>b;
		um[b]=i;
	}
	ll inv=mergeSort(a, t, 0, n-1);
	if(inv%2==0){
		cout<<"Possible"<<'\n';
	}else{
		cout<<"Impossible"<<'\n';
	}
	return 0;				
}
