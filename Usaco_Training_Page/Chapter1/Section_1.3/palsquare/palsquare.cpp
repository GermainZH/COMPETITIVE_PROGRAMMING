/*
ID: germain1
TASK: palsquare
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string a){
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
    ifstream fin ("palsquare.in");
    ofstream fout ("palsquare.out");
    fin.tie(NULL);
    fout.tie(NULL);
    int b;
    fin>>b;
    for(int i=1;i<=300;++i){
        if(isPalindrome(bconv(i*i,b))){
            fout<<bconv(i,b)<<' '<<bconv(i*i,b)<<'\n';
        }
    }
    return 0;
}
