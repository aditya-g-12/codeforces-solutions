#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='.'){
        cout<<"0";
        continue;
        }
        if(s[i]=='-'){
            if(s[i+1]=='-'){
                i++;
                cout<<"2";
                continue;
            }
            else{
                cout<<"1";
                i++;
                continue;
            }
        }
        
    }
}