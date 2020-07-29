/*
ID: germain1
TASK: dualpal
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

bool isPal(string a){
    string ar=a;
    reverse(ar.begin(),ar.end());
    return ar==a;
}


string bconv(int decimal, int base){
    if(decimal == 0) return "0";
    char NUMS[] = "0123456789ABCDEFGHIJK";//increase per base
    string result = "";
    do{
        result.push_back(NUMS[decimal%base]);
        decimal /= base;
    }while(decimal != 0);
    return string(result.rbegin(), result.rend());
}

int main(){
    ios_base::sync_with_stdio(false);
    ifstream fin ("dualpal.in");
    ofstream fout ("dualpal.out");
    fin.tie(NULL);
    fout.tie(NULL);
    int n,s;
    fin>>n>>s;
    s++;
    int count=0;
    while(count<n){
        int bcount=0;
        for(int i=2; i<=10;++i){
            if(isPal(bconv(s,i))){
                bcount++;
            }
            if(bcount==2){
                fout<<s<<'\n';
                s++;
                count++;
                break;
            }
        }
        if(bcount!=2){
            s++;
        }
    }
    return 0;
}

