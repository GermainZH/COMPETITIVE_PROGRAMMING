/*
ID: germain1
TASK: pprime
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin ("pprime.in");
ofstream fout ("pprime.out");
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

int main(){
    int x,y;
    fin>>x>>y;
    int dg[5]={1,3,5,7,9};
    int digits=log10(x)+1;
    int pp;
    if(digits<=1){
        for(int a=0; a<5;++a){
            pp=dg[a];
            if(pp>=x && pp<=y && isPrime(pp)){
                fout<<pp<<'\n';
            }
        }
    }
    if(digits<=2){
        for(int a=0; a<5;++a){
            pp=dg[a]*10+dg[a];
            if(pp>=x && pp<=y && isPrime(pp)){
                fout<<pp<<'\n';
            }
        }
    }
    if(digits<=3){
        for(int a=0; a<5;++a){
            for(int b=0;b<=9;++b){
                pp=dg[a]*100+b*10+dg[a];
                if(pp>=x && pp<=y && isPrime(pp)){
                    fout<<pp<<'\n';
                }
            }
        }
    }
    if(digits<=4){
        for(int a=0; a<5;++a){
            for(int b=0;b<=9;++b){
                pp=dg[a]*1000+b*100+b*10+dg[a];
                if(pp>=x && pp<=y && isPrime(pp)){
                    fout<<pp<<'\n';
                }
            }
        }
    }
    if(digits<=5){
        for(int a=0; a<5;++a){
            for(int b=0;b<=9;++b){
                for(int c=0;c<=9;++c){
                    pp=dg[a]*10000+b*1000+c*100+b*10+dg[a];
                    if(pp>=x && pp<=y && isPrime(pp)){
                        fout<<pp<<'\n';
                    }
                }
            }
        }
    }
    if(digits<=6){
        for(int a=0; a<5;++a){
            for(int b=0;b<=9;++b){
                for(int c=0;c<=9;++c){
                    pp=dg[a]*100000+b*10000+c*1000+c*100+b*10+dg[a];
                    if(pp>=x && pp<=y && isPrime(pp)){
                        fout<<pp<<'\n';
                    }
                }
            }
        }
    }
    if(digits<=7){
        for(int a=0; a<5;++a){
            for(int b=0;b<=9;++b){
                for(int c=0;c<=9;++c){
                    for(int d=0;d<=9;++d){
                        pp=dg[a]*1000000+b*100000+c*10000+d*1000+c*100+b*10+dg[a];
                        if(pp>=x && pp<=y && isPrime(pp)){
                            fout<<pp<<'\n';
                        }
                    }
                }
            }
        }
    }
    if(digits<=8){
        for(int a=0; a<5;++a){
            for(int b=0;b<=9;++b){
                for(int c=0;c<=9;++c){
                    for(int d=0;d<=9;++d){
                        pp=dg[a]*10000000+b*1000000+c*100000+d*10000+d*1000+c*100+b*10+dg[a];
                        if(pp>=x && pp<=y && isPrime(pp)){
                            fout<<pp<<'\n';
                        }
                    }
                }
            }
        }
    }
    return 0;
}
