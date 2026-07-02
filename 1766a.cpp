#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int count =0;
        if(a<10){
            cout<<a<<endl;
            continue;
        }
        else{
            count+=9;
            count+=(a/10);
            cout<<count<<endl;
        }
    }
}