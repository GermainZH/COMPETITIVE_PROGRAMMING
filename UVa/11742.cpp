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
	int n,m;
	while(cin>>n>>m && n+m!=0){
		if(m==0){
			int fact=1;
			for(int i=n; i>0;i--){
				fact*=i;
			}
			cout<<fact<<'\n';
			continue;
		}
		int check[m][3];
		for(int i=0; i<m;++i){
			cin>>check[i][0]>>check[i][1]>>check[i][2];
		}
		int perm[8]={0,1,2,3,4,5,6,7};
		int count=0;
		do{
			bool flag=true;
			for(int i=0; i<m;++i){
				int la,lb;
				for(int y=0; y<n;++y){
					if(perm[y]==check[i][0]){
						la=y;
					}
					if(perm[y]==check[i][1]){
						lb=y;
					}
				}
				if(check[i][2]<0){
					if(abs(check[i][2])>abs(la-lb))flag=false;
				}else{
					if(abs(check[i][2])<abs(la-lb))flag=false;
				}
			}
			if(flag){
				++count;
			}
		}while(next_permutation(perm, perm+n));
		cout<<count<<'\n';
	}
	return 0;				
}
