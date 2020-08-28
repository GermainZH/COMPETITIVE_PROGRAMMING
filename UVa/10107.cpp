#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int arr[9999];

void insertionSort(int arr[],int n){
    for (int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int c=0;
	while(cin>>arr[c]){
		insertionSort(arr,c+1);
		if(c==0){
			cout<<arr[0];
		}else if(c==1){
			cout<<(arr[0]+arr[1])/2;
		}else if((c+1)%2==1){
			cout<<arr[(c+1)/2];
		}else{
			cout<<(arr[(c+1)/2]+arr[(c+1)/2-1])/2;
		}
		cout<<'\n';
		++c;
	}
	return 0;				
}
