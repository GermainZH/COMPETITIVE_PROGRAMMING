#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back
#define p push
#define pp pop

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	bool first=true;
	while(cin>>n && n){
		int arr[n];
		if(!first){
			cout<<'\n';
		}
		first=false;
		for(int i=0; i<n;++i){
			cin>>arr[i];
		}
		for(int a=0; a<n-5;++a){
			for(int b=a+1;b<n-4;++b){
				for(int c=b+1; c<n-3;++c){
					for(int d=c+1;d<n-2;++d){
						for(int e=d+1; e<n-1;++e){
							for(int f=e+1;f<n;++f){
								cout<<arr[a]<<' '<<arr[b]<<' '<<arr[c]<<' '<<arr[d]<<' '<<arr[e]<<' '<<arr[f]<<'\n';
							}
						}				
					}
				}
			}
		}
	}
	return 0;				
}		
