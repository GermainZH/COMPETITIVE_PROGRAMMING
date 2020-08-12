#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n!=0){
		int curr[n], start[n]={0};
		bool flag=true;
		for(int i=0; i<n;++i){
			int p;
			cin>>curr[i]>>p;
			if(i+p>=0 && i+p<n && start[i+p]==0){
				start[i+p]=curr[i];
			}else{
				flag=false;
			}
		}
		if(flag){
			for(int y=0; y<n-1;++y){
				cout<<start[y]<<' ';
			}
			cout<<start[n-1];
			cout<<'\n';
		}else{
			cout<<-1<<'\n';
		}
	}
	return 0;				
}
