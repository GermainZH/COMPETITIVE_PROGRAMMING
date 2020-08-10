#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[7]={3,1,2,3};//=={3,1,2,3,0,0,0}
	vector<int> v(5,2);//=={2,2,2,2,2};
	
	//iota == (start,end,starting value); assigns increasing values from starting value
	iota(arr,arr+7,0);
	iota(v.begin(),v.end(),21);

	for(auto temp:arr){
		cout<<temp<<'\n';
	}
	for(auto itr=v.begin();itr!=v.end();itr++){//use auto instea of vector<int>::iterator
		cout<<*itr<<'\n';
	}
	return 0;				
}
