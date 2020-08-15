#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n;
	cin>>n;
	for(int i=1; i<=n;++i){
		int t[10001]={0};
		int k1,k2,k3;
		cin>>k1;
		int a[k1];
		for(int y=0; y<k1;++y){
			cin>>a[y];
			t[a[y]]++;
		}
		cin>>k2;
		int b[k2];
		for(int y=0; y<k2;++y){
			cin>>b[y];
			t[b[y]]++;
		}
		cin>>k3;
		int c[k3];
		for(int y=0; y<k3;++y){
			cin>>c[y];
			t[c[y]]++;
		}
		vector<int> av,bv,cv;
		int ac=0,bc=0,cc=0;
		for(int y=0; y<k1;++y){
			if(t[a[y]]==1){
				av.push_back(a[y]);
				ac++;
			}
		}
		for(int y=0; y<k2;++y){
			if(t[b[y]]==1){
				bv.push_back(b[y]);
				bc++;
			}
		}
		for(int y=0; y<k3;++y){
			if(t[c[y]]==1){
				cv.push_back(c[y]);
				cc++;
			}
		}
		int mx=max(ac,max(bc,cc));
		cout<<"Case #"<<i<<':'<<'\n';
		if(ac==mx){
			cout<<1<<' '<<mx;
			sort(av.begin(),av.end());
			for(auto itr=av.begin();itr!=av.end();++itr){
				cout<<' '<<*itr;
			}
			cout<<'\n';
		}
		if(bc==mx){
			cout<<2<<' '<<mx;
			sort(bv.begin(),bv.end());
			for(auto itr=bv.begin();itr!=bv.end();++itr){
				cout<<' '<<*itr;
			}
			cout<<'\n';
		}
		if(cc==mx){
			cout<<3<<' '<<mx;
			sort(cv.begin(),cv.end());
			for(auto itr=cv.begin();itr!=cv.end();++itr){
				cout<<' '<<*itr;
			}
			cout<<'\n';
		}
	}
	return 0;				
}
