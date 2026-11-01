#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%2==0){
            cout<<"0";
        }
        else{
            cout<<n;
        }
        cout<<endl;
    }
}