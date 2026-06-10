#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    string s2;
    string s3; 
    string s4;
    cin>>s1>>s2>>s4;
    s3=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s4.begin(),s4.end());
    if(s4==s3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}