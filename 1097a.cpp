#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    string s;
    cin.ignore();
    getline(cin,s);
    if (s.find(a[0],0)!=string::npos or s.find(a[1],0)!=string::npos){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    

}