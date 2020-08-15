#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	string f[n];
	for(int i=0; i<n;++i){
		cin>>f[i];
	}
	int q;
	cin>>q;
	for(int i=0; i<q;++i){
		int j;
		cin>>j;
		j--;
		int left=j-1,right=j+1;
		string outL,outR;
		while(true){
			if(f[j]!="?"){
				cout<<f[j]<<'\n';
				break;
			}
			if(left>=0 && right<=n-1 && f[left]!="?" && f[right]!="?"){
				cout<<"middle of "<<f[left]<<" and "<<f[right]<<'\n';
				break;
			}
			if(left>=0 && f[left]!="?"){
				outL+="right of ";
				cout<<outL<<f[left]<<'\n';
				break;
			}else{
				outL+="right of ";
				left--;
			}
			if(right<=n-1 && f[right]!="?"){
				outR+="left of ";
				cout<<outR<<f[right]<<'\n';
				break;
			}else{
				outR+="left of ";
				right++;
			}
		}
	}
	return 0;				
}
