#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int m,n,hn=1;
	while(cin>>m>>n && n+m!=0){
		char h[n][m];
		int r,c;
		char d;
		for(int i=0; i<n;++i){
			for(int y=0; y<m;++y){
				cin>>h[i][y];
				if(h[i][y]=='*'){
					r=i;
					c=y;
				}
			}
		}
		char curr='*';
		if(r==0){
			d='d';
			r++;
		}else if(r==n-1){
			d='u';
			r--;
		}else if(c==0){
			d='r';
			c++;
		}else{
			d='l';
			c--;
		}
		curr=h[r][c];
		while(curr!='x'){
			if(d=='r'){
				while(curr=='.'){
					c++;
					curr=h[r][c];
				}
				if(curr=='/'){
					d='u';
					r--;
					curr=h[r][c];
				}else if(curr=='\\'){
					d='d';
					r++;
					curr=h[r][c];
				}
			}else if(d=='l'){
				while(curr=='.'){
					c--;
					curr=h[r][c];
				}
				if(curr=='/'){
					d='d';
					r++;
					curr=h[r][c];
				}else if(curr=='\\'){
					d='u';
					r--;
					curr=h[r][c];
				}
			}else if(d=='u'){
				while(curr=='.'){
					r--;
					curr=h[r][c];
				}
				if(curr=='/'){
					d='r';
					c++;
					curr=h[r][c];
				}else if(curr=='\\'){
					d='l';
					c--;
					curr=h[r][c];
				}
			}else if(d=='d'){
				while(curr=='.'){
					r++;
					curr=h[r][c];
				}
				if(curr=='/'){
					d='l';
					c--;
					curr=h[r][c];
				}else if(curr=='\\'){
					d='r';
					c++;
					curr=h[r][c];
				}
			}
		}
		h[r][c]='&';
		cout<<"HOUSE "<<hn<<'\n';
		hn++;
		for(int i=0; i<n;++i){
			for(int y=0; y<m;++y){
				cout<<h[i][y];
			}
			cout<<'\n';
		}
	}
	return 0;				
}
