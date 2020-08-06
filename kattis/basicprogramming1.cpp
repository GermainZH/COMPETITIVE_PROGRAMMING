#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0; i<n;++i){
        cin>>a[i];
    }
    if(t==1){
        cout<<7<<'\n';
    }else if(t==2){
        if(a[0]>a[1]){
            cout<<"Bigger"<<'\n';
        }else if(a[0]==a[1]){
            cout<<"Equal"<<'\n';
        }else{
            cout<<"Smaller"<<'\n';
        }
    }else if(t==3){
        int temp[3];
        temp[0]=a[0];
        temp[1]=a[1];
        temp[2]=a[2];
        sort(temp,temp+3);
        cout<<temp[1]<<'\n';
    }else if(t==4){
        long long sum=0;
        for(auto t: a){
            sum+=t;
        }
        cout<<sum<<'\n';
    }else if(t==5){
        long long sum=0;
        for(auto t: a){
            if(t%2==0){
                sum+=t;
            }
        }
        cout<<sum<<'\n';
    }else if(t==6){
        for(int i=0; i<n;++i){
            cout<<static_cast<char>((a[i]%26)+'a');
        }
        cout<<'\n';
    }else{
        int ct=0,curr=0;
        while(true){
            if(curr>n-1){
                cout<<"Out"<<'\n';
                break;
            }else if(curr==n-1){
                cout<<"Done"<<'\n';
                break;
            }
            if(ct>n){
                cout<<"Cyclic"<<'\n';
                break;
            }
            curr=a[curr];
            ++ct;
        }
    }
    return 0;
}

