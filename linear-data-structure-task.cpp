#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool cmp(tuple<int,string,string> a, tuple<int,string,string> b){
	return get<1>(a)<get<1>(b);
}

bool cmp2(tuple<int,string,string> a, tuple<int,string,string> b){
		return get<2>(a)<get<2>(b);
}

bool fcmp(pair<int,int> a, pair<int,int> b){
	return (double)a.first/a.second>(double)b.first/b.second;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);			
	vector<tuple<int,string,string>> p;
	p.push_back({23,"a","a"});
	p.push_back({45,"asd","fasd"});
	p.push_back({2,"gga","kj"});
	//sorted by first parameter age ascending
	sort(p.begin(),p.end());
	for(auto itr=p.begin();itr!=p.end();++itr){
		cout<<get<0>(*itr)<<' ';
	}
	cout<<'\n';
	//sorted by lname descending
	sort(p.rbegin(),p.rend(),cmp);
	for(auto itr=p.begin();itr!=p.end();++itr){
		cout<<get<1>(*itr)<<' ';
	}
	cout<<'\n';
	//sorted by fname ascending
	sort(p.begin(),p.end(),cmp2);
	for(auto itr=p.begin();itr!=p.end();++itr){
		cout<<get<2>(*itr)<<' ';
	}
	cout<<'\n';
	//fractions in ascending
	vector<pair<int,int>> f;
	f.push_back({1,4});
	f.push_back({5,2});
	f.push_back({1,2});
	sort(f.begin(),f.end(),fcmp);
	for(auto itr=f.begin();itr!=f.end();++itr){
		cout<<(*itr).first<<'/'<<(*itr).second<<'\n';
	}
	return 0;				
}
