/*
ID: germain1
TASK: stringprocessing
LANG: C++
*/
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cstring>

using namespace std;

bool isVowel(char x){
        string vowels="aioeu";
        for(int i=0; i<vowels.size();++i){
                if(x==vowels.at(i)){
                        return true;
                }
        }
        return false;
}

int main(){
        string t="",line;
        while(getline(cin,line) && line.substr(0,7)!="......."){
                t+=line+" ";
        }
        string p="love";
        bool isF=false;
        for(int i=0; i<t.size()-p.size();++i){
                if(t.substr(i,p.size())==p){
                        cout<<i<<'\n';
                        isF=true;
                }
        }
        if(!isF){
                cout<<-1<<'\n';
        }
        //string to lowercase
        transform(t.begin(),t.end(),t.begin(),::tolower);
        int c=0,v=0,n=0;
        for(int i=0; i<t.size();++i){
                if(isdigit(t.at(i))){
                        n++;
                }else{
                        c++;
                        if(isVowel(t.at(i))){
                                v++;
                        }
                }
        }
        
        unordered_map<string,int> num;
        char sa[t.size()+1];
        strcpy(sa,t.c_str());
        vector<string> tokens;
        char *st=strtok(sa," .");
        while(st!=NULL){
            tokens.push_back(st);
            num[st]++;
            st=strtok(NULL," .");
        }
        sort(tokens.begin(),tokens.end());
        for(vector<string>::iterator itr=tokens.begin();itr!=tokens.end();++itr){
                cout<<*itr<<'\n';
        }
        cout<<"un_map"<<'\n';
        for(unordered_map<string,int>::iterator itr=num.begin();itr!=num.end();++itr){
                cout<<(*itr).first<<' '<<(*itr).second<<'\n';
        }
        return 0;	
}
