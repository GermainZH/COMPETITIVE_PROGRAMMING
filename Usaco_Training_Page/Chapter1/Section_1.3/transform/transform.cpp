/*
ID: germain1
TASK: transform
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

ifstream fin ("transform.in");
ofstream fout ("transform.out");

struct board{
    char trans[10][10];
    int n;
};

bool isEqual(board a, board b){
    for(int i=0; i<a.n;++i){
        for(int y=0; y<a.n;++y){
            if(a.trans[i][y]!=b.trans[i][y]){
                return false;
            }
        }
    }
    return true;
}

board rotate(board a){
    for (int i = 0; i < a.n / 2;++i){
        for (int j = i; j < a.n - i - 1; ++j){
            int temp = a.trans[i][j];
            a.trans[i][j] = a.trans[a.n - 1 - j][i];
            a.trans[a.n - 1 - j][i] = a.trans[a.n - 1 - i][a.n - 1 - j];
            a.trans[a.n - 1 - i][a.n - 1 - j] = a.trans[j][a.n - 1 - i];
            a.trans[j][a.n - 1 - i] = temp;
        }
    }
    return a;
}

board reflect(board a){
    for(int i=0; i<a.n;++i){
        for(int y=0; y<a.n/2;++y){
            char temp=a.trans[i][y];
            a.trans[i][y]=a.trans[i][a.n-1-y];
            a.trans[i][a.n-1-y]=temp;
        }
    }
    return a;
}

void solve(board a, board b){
    bool flag=false;
    for(int i=1; i<=3;++i){
        a=rotate(a);
        if(isEqual(a,b)){
            fout<<i<<'\n';
            flag=true;
            break;
        }
    }
    a=rotate(a);
    if(isEqual(reflect(a),b)&& !flag){
        fout<<'4'<<'\n';
        flag=true;
    }
    if(!flag){
        for(int i=0; i<=3;++i){
            a=rotate(a);
            if(isEqual(reflect(a),b)){
                fout<<'5'<<'\n';
                flag=true;
                break;
            }
        }
    }
    if(isEqual(a,b) && !flag){
        fout<<'6'<<'\n';
    }else if(!flag){
        fout<<'7'<<'\n';
    }
}

int main(){
    int n;
    fin>>n;
    board a;
    a.n=n;
    for(int i=0; i<n;++i){
        for(int y=0; y<n;++y){
            fin>>a.trans[i][y];
        }
    }
    board b;
    b.n=n;
    for(int i=0; i<n;++i){
        for(int y=0; y<n;++y){
            fin>>b.trans[i][y];
        }
    }
    solve(a,b);
    return 0;
}
