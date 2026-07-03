#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int a=stoi(s);
        int b=sqrt(a);

        if(b*b==a){
            cout<<0<<" "<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}