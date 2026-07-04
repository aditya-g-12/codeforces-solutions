#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int i =0;
    int len = t.length();
    for(int j=0; j<len;j++){
        if(s[i]==t[j]){
            i++;
        }
    }
    if(i==0){
        cout<<"0"<<endl;
    }
    else{
    cout<<i+1<<endl;
    }
}