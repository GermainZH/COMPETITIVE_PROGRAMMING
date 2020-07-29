/*
ID: germain1
TASK: namenum
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    ifstream fin ("namenum.in");
    ifstream tfin ("dict.txt");
    ofstream fout ("namenum.out");
    fin.tie(NULL);
    tfin.tie(NULL);
    fout.tie(NULL);
    int num;
    fin>>num;
    int count=0;
    while(!tfin.eof()){
        count++;
        string name;
        tfin>>name;
        string nameV="";
        for(int i=0; i<name.size();++i){
            if(name.at(i)=='A' || name.at(i)=='B' ||name.at(i)=='C'){
                nameV+="2";
            }else if(name.at(i)=='D' || name.at(i)=='E' ||name.at(i)=='F'){
                nameV+="3";
            }else if(name.at(i)=='G' || name.at(i)=='H' ||name.at(i)=='I'){
                nameV+="4";
            }else if(name.at(i)=='J' || name.at(i)=='K' ||name.at(i)=='L'){
                nameV+="5";
            }else if(name.at(i)=='M' || name.at(i)=='N' ||name.at(i)=='O'){
                nameV+="6";
            }else if(name.at(i)=='P' || name.at(i)=='R' ||name.at(i)=='S'){
                nameV+="7";
            }else if(name.at(i)=='T' || name.at(i)=='U' ||name.at(i)=='V'){
                nameV+="8";
            }else if(name.at(i)=='W' || name.at(i)=='X' ||name.at(i)=='Y'){
                nameV+="9";
            }
        }
        if(to_string(num)==nameV){
            fout<<name<<'\n';
        }
    }
    return 0;
}
