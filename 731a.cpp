#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lengthh = s.length();
    int countt =0 ;
    char oldtarget='a';
    for( int i=0;i<lengthh;i++){
        char target = s[i];
    if(abs(oldtarget-target)<=13){
        countt+=abs(oldtarget-target);
    }
    else{
        countt+=26-abs(oldtarget-target);
    }
    oldtarget = target;
    } 
    cout<<countt<<endl;  
}