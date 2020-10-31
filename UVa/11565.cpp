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
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		bool flag=false;
		for(int i=-100; i<101;++i){
			for(int y=-100; y<101;++y){
				for(int j=-100; j<101;++j){
					if((i!=y) && (y!=j) && (j!=i)){
						if((i+y+j==a) && (i*y*j==b) && (i*i+y*y+j*j==c)){
							cout<<i<<' '<<y<<' '<<j<<'\n';
							flag=true;
						}
					}
					if(flag){
						break;
					}
				}
				if(flag){
					break;
				}
			}
			if(flag){
				break;
			}
		}
		if(!flag){
			cout<<"No solution."<<'\n';
		}
	}
	return 0;				
}
