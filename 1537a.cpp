#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int tem;
        int sum =0;
        for(int i =0;i<a;i++){
            cin>>tem;
            sum+=tem;
        }
        if(sum ==a){
            cout<<0<<endl;
        }
        else{
        if(sum>a){
            cout<<(sum-a)<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    }
}