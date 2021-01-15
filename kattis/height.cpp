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
    cin>>n;
    for(int i=0; i<n;++i){
        int temp;
        cin>>temp;
        cout<<temp;
        int arr[20];
        for(int y=0;y<20;++y){
            cin>>arr[y];
        }
        int count=0;
        for (int y=1;y<20;y++){
            int key=arr[y];
            int j=y-1;
            while (j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                count++;
                j--;
            }
            arr[j+1]=key;
        }
        cout<<' '<<count<<'\n';
    }
    return 0;               
}
