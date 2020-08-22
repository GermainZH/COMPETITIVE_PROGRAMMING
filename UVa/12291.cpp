#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

string l[10];
string s[10];
string cp1[10];
string cp2[10];

void start(int n){
	for(int i=0; i<n;++i){
		cp1[i].assign(n,'.');	
	}
}

bool cover(string a[],int n,int r,int c,int r1, int r2, int c1, int c2){
	for(int i=r,j=r1;j<=r2;++i,++j){
		for(int y=c,k=c1;k<=c2;++y,++k){
			if(s[j][k]=='*'){
				if(a[i][y]=='*'){
					return false;
				}
				a[i][y]=s[j][k];
			}
		}
	}
	return true;
}

bool isEqual(int n){
	for(int i=0; i<n;++i){
		for(int y=0; y<n;++y){
			if(l[i][y]!=cp2[i][y])return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,m;
	while(cin>>n>>m && n+m!=0){
		for(int i=0; i<n;++i){
			cin>>l[i];
		}
		for(int i=0; i<m;++i){
			cin>>s[i];
		}
		int r1=INT_MAX,r2=0,c1=INT_MAX,c2=0;
		for(int i=0; i<m;++i){
			for(int y=0; y<m;++y){
				if(s[i][y]=='*'){
					r1=min(r1,i);
					r2=max(r2,i);
					c1=min(c1,y);
					c2=max(c2,y);
				}
			}
		}
		bool bf=false;
		for(int i=0; i<n-r2+r1;++i){
			for(int y=0; y<n-c2+c1;++y){
				start(n);
				cover(cp1, n, i, y, r1, r2, c1, c2);
				for(int j=0; j<n-r2+r1;++j){
					for(int k=0;k<n-c2+c1;++k){
						for(int x=0; x<n;++x){
							cp2[x]=cp1[x];
						}
						if(cp2[j][k]=='.' && cover(cp2, n, j, k, r1, r2, c1, c2)){
							if(isEqual(n)){
								bf=true;
								break;
							}
						}
					}
					if(bf){
						break;
					}
				}
				if(bf){
					break;
				}
			}
			if(bf){
				break;
			}
		}
		if(bf){
			cout<<1<<'\n';
		}else{
			cout<<0<<'\n';
		}
	}
	return 0;				
}
