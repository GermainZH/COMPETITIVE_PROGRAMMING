#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int a[11],b[11],c[11],d[11];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,cs=1;
	while(cin>>n && n){
		for(int i=0; i<n;++i){
			cin>>a[i]>>b[i]>>c[i];
			if(c[i]>a[i]){
				d[i]=0;
				c[i]-=a[i];
			}else{
				d[i]=1;
			}
		}
		int i;
		for(i=1; i<10000;++i){
			int awake=0,sleep=0;
			for(int y=0; y<n;++y){
				if(d[y]){
					awake++;
				}else{
					sleep++;
				}
			}
			if(awake==n){
				cout<<"Case "<<cs<<": "<<i<<'\n';
				break;
			}
			for(int y=0; y<n;++y){
				c[y]++;
				if(d[y] && c[y]>a[y]){
					if(sleep>awake){
						d[y]=0;
					}
					c[y]=1;
				}else if(!d[y] && c[y]>b[y]){
					c[y]=1;
					d[y]=1;
				}
			}
		}
		if(i==10000){
			cout<<"Case "<<cs<<": "<<-1<<'\n';
		}
		cs++;
	}
	return 0;
}
