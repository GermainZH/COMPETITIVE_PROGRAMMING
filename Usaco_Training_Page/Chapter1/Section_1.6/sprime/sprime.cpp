/*
ID: germain1
TASK: sprime
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

ofstream fout ("sprime.out");
int digs[6]={1,2,3,5,7,9};

bool isPrime(int n){
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3; i*i<=n;i+=2){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}
void gen(int n, int l, int pr){
    if(l==n-1){
        if(isPrime(pr)){
            fout<<pr<<'\n';
        }
    }else{
        if(isPrime(pr)){
            int temp=pr;
            for(int i=0; i<6;++i){
                pr=pr*10+digs[i];
                gen(n,l+1,pr);
                pr=temp;
            }
        }
    }
}

int main(){
    ifstream fin ("sprime.in");
    int n;
    fin>>n;
    for(int i=1; i<6;++i){
        gen(n,0,digs[i]);
    }
    return 0;
}

