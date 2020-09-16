#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pf push_front 
#define pb push_back
#define ppf pop_front
#define ppb pop_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);         
    int n;
    cin>>n;
    deque<int> right;
	deque<int> left;
    for(int i=0; i<n;++i){
        string a;
        cin>>a;
        int b;
        cin>>b;
        if(a=="push_back"){
            left.pb(b);
			if(left.size()>right.size()){
				right.pb(left.front());
				left.ppf();
			}
        }else if(a=="push_front"){
        	right.pf(b);
			if(right.size()>left.size()+1){
				left.pf(right.back());
				right.ppb();
			}
        }else if(a=="push_middle"){
			if(right.size()>left.size()){
				left.pf(b);
			}else{
				right.pb(b);
			}
		}else{
			if(b<right.size()){
				cout<<right[b]<<'\n';
			}else{
				cout<<left[b-right.size()]<<'\n';
			}
		}
    }
    return 0;               
}

