#include <bits/stdc++.h>

using namespace std;

int sum(string x){
    int sum=0;
    for(int i=0; i<x.size();++i){
        if(isalpha(x.at(i))){
            sum+=tolower(x.at(i))-96;
        }
    }
    return sum;
}
int sumDigits(int x){
    int sum=0;
    while(x!=0){
        sum+=x%10;
        x/=10;
    }
    if(sum>=10){
        sum=sumDigits(sum);
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    while(getline(cin,a) && getline(cin,b)){
        double as=sumDigits(sum(a));
        double bs=sumDigits(sum(b));
        cout<<setprecision(2)<<fixed<<min(as,bs)/max(as,bs)*100<<" %"<<'\n';
    }
    return 0;
}

