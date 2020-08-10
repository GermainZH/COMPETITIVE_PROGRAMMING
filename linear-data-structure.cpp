#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <tuple>
using namespace std;

struct sort3{
	int a,b,c;
};

bool sort3b(sort3 a, sort3 b){
	return a.a > b.a;
}

struct cmp{
	bool operator()(const sort3& v,const int& k){
		return v.a<k;
	}
	bool operator()(const int& k,const sort3& v){
		return k<v.a;
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//init array
	int arr[5]={5,12,5,123,2};
	//init vector
	vector<int> v1{1,4,5};//{1,4,5}
	vector<int> v2(5,3);//{3,3,3,3,3}
	vector<int> v3(arr,arr+5);//(start of arr, end of arr) {5,12,5,123,2}
	vector<int> v4(v1.begin(),v1.end());//(start of v1, end of v1) {1,4,5}
	
	//iterate through entire vector
	for(vector<int>::iterator itr=v4.begin();itr!=v4.end();++itr){
		cout<<*itr<<'\n';
	}
	//same thing except faster to type
	for(auto itr=v4.begin();itr!=v4.end();++itr){
		cout<<*itr<<'\n';
	}
	
	//sort ascending vector
	cout<<"Sort Asc.___"<<'\n';
	sort(v3.begin(),v3.end());
	for(auto itr=v3.begin();itr!=v3.end();++itr){
		cout<<*itr<<'\n';
	}
	//sort descending vector
	cout<<"Sort Desc.___"<<'\n';
	sort(v3.rbegin(),v3.rend());
	for(auto itr=v3.begin();itr!=v3.end();++itr){
		cout<<*itr<<'\n';
	}
	//sort ascending arr and descending arr
	sort(arr, arr+5);
	int arr2[5];
	copy(arr,arr+5,arr2);//assign arr a value of another arr
	reverse(arr2,arr2+5);
	for(int i=0; i<5;++i){
		cout<<"arr1: "<<arr[i]<<" arr2: "<<arr2[i]<<'\n';
	}
	//partially sort an vector and array alot like insertion sort for range
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	int partdemo[5]={23,412,53,2,1};
	partial_sort(partdemo,partdemo+3,partdemo+5);//sorts from partdemo to partdemo+3
	partial_sort(v1.begin(),v1.begin()+3,v1.end());
	for(int i=0; i<5;++i){
		cout<<partdemo[i]<<' ';
	}
	cout<<'\n';
	for(auto itr=v1.begin();itr!=v1.end();++itr){
		cout<<*itr<<'\n';
	}
	//multi-field sorting using tuple
	vector<tuple<int,int,int>> mfv;//4,12341,141234
	mfv.push_back({141234,2,3});
	mfv.push_back({4,2,1});
	mfv.push_back({12341,2,3});
	sort(mfv.begin(),mfv.end());
	for(auto itr=mfv.begin();itr!=mfv.end();++itr){
		cout<<get<0>(*itr)<<' ';
	}
	cout<<'\n';
	//sorting multi-field vector using struct
	vector<sort3> mfv2;
	mfv2.push_back({1,1,1});
	mfv2.push_back({13321,53,12});
	mfv2.push_back({44,213,453252});
	sort(mfv2.begin(),mfv2.end(),sort3b);//since strut isnt recognized must pass custom comparison
	for(auto itr=mfv2.begin();itr!=mfv2.end();++itr){
		cout<<(*itr).a<<' ';
	}
	cout<<'\n';
	return 0;				
}
