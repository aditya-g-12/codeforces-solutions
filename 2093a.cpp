#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int k;
        cin>>k;
        if(k%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}