#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	while(cin>>n && n){
		double l,w,h,maxV=0,maxH=0;
		for(int i=0; i<n;++i){
			cin>>l>>w>>h;
			double v=l*w*h;
			if(h>=maxH){
				if(h==maxH){
					maxV=max(maxV,v);
				}else{
					maxH=h;
					maxV=v;
				}
			}
		}
		cout<<maxV<<'\n';
	}
	return 0;				
}
