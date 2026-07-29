#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,l;
        cin>>r>>l;
        if(r==l and r==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<(l-r)<<endl;
        }
    }
}