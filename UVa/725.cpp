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
		if(!first){
			cout<<'\n';
		}
		first=false;
		bool sol=false;
		for(int i=1234;i<=98765/n;++i){
			bool digits[10]={false};
			if(i<10000){
				digits[0]=true;
			}
			int temp=i*n;
			int temp2=i;
			while(temp!=0){
				digits[temp%10]=true;
				temp/=10;
			}
			while(temp2!=0){
				digits[temp2%10]=true;
				temp2/=10;
			}
			bool flag=true;
			for(int y=0; y<10;++y){
				if(!digits[y]){
					flag=false;
					break;
				}
			}
			if(flag){
				sol=true;
				cout<<i*n<<' '<<'/';
				if(i>10000){
					cout<<' '<<i<<' ';
				}else{
					cout<<' '<<0<<i<<' ';
				}
				cout<<"= "<<n<<'\n';
			}
		}
		if(!sol){
			cout<<"There are no solutions for "<<n<<'.'<<'\n';
		}
	}
	return 0;				
}
