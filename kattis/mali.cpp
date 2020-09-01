#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int a[100]={0}, b[100]={0}, at[100], bt[100];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	while(n--){
		int x,y;
		cin>>x>>y;
		a[x-1]++;
		b[y-1]++;
		memcpy(at,a,sizeof at);
		memcpy(bt,b,sizeof bt);
		int j=0, k=99,mm=0;	
		while(j<100 && k>=0){
			if(at[j] && bt[k]){
				mm=max(mm,j+k+2);
				int c=min(at[j],bt[k]);
				at[j]-=c;
				bt[k]-=c;
			}
			if(!at[j]){
				j++;
			}
			if(!bt[k]){
				k--;
			}
		}
		cout<<mm<<'\n';
	}
	return 0;				
}
