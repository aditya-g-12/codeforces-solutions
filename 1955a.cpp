#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a , b;
        cin>>n>>a>>b;
        if((2*a)>b){
        if(n%2==0){
            cout<<(b*(n/2))<<endl;
        }
        else{
            cout<<(a+(b*(n/2)))<<endl;
        }}
        else{
            cout<<(n*a)<<endl;
        }
    }
}