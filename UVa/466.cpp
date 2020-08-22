#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back

bool isEqual(vector<vector<char>> a,vector<vector<char>> b,int n){
	for(int i=0; i<n;++i){
		for(int y=0; y<n;++y){
			if(a[i][y]!=b[i][y])return false;
		}
	}
	return true;
}

vector<vector<char>> rotateCC(vector<vector<char>> a, int n){
	for(int i=0; i<n/2;++i){
		for(int y=i; y<n-i-1;++y){
			int temp=a[i][y]; 
			a[i][y]=a[n-1-y][i]; 
			a[n-1-y][i]=a[n-1-i][n-1-y]; 
			a[n-1-i][n-1-y]=a[y][n-1-i]; 
			a[y][n-1-i]=temp; 	
		}
	}
	return a;
}

vector<vector<char>> reflect(vector<vector<char>> a, int n){
	for(int i=0; i<n/2;++i){
		for(int y=0; y<n;++y){
			swap(a[i][y],a[n-1-i][y]);
		}
	}
	return a;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	int n,x=1;
	while(cin>>n){
		vector<vector<char>> a(n,vector<char>(n));
		vector<vector<char>> b(n,vector<char>(n));
		vector<vector<char>> ar(n,vector<char>(n));
		for(int i=0; i<n;++i){
			string temp,temp2;
			cin>>temp>>temp2;
			for(int y=0; y<temp.size();++y){
				a[i][y]=temp.at(y);
				b[i][y]=temp2.at(y);
				ar[i][y]=a[i][y];
			}
		}
		ar=reflect(ar,n);
		int out=INT_MAX;
		if(isEqual(ar,b,n)){
			out=min(out,4);
		}
		int r;
		for(int c=1;c<=3;++c){
			a=rotateCC(a,n);
			ar=rotateCC(ar,n);
			if(isEqual(a, b, n)){
				out=min(out,c);
			}
			if(isEqual(ar, b, n)){
				out=min(out,5);
				r=90*c;
			}
		}
		a=rotateCC(a,n);
		if(isEqual(a, b, n)){
			out=min(out,0);
		}
		if(out==0){
			cout<<"Pattern "<<x<<" was preserved.";
		}else if(out==1){
			cout<<"Pattern "<<x<<" was rotated 90 degrees.";
		}else if(out==2){
			cout<<"Pattern "<<x<<" was rotated 180 degrees.";
		}else if(out==3){
			cout<<"Pattern "<<x<<" was rotated 270 degrees.";
		}else if(out==4){
			cout<<"Pattern "<<x<<" was reflected vertically.";
		}else if(out==5){
			cout<<"Pattern "<<x<<" was reflected vertically and rotated "<<r<<" degrees.";
		}else{
			cout<<"Pattern "<<x<<" was improperly transformed.";
		}
		cout<<'\n';
		x++;
	}
	return 0;				
}
