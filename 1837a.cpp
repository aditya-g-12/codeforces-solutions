#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int x,k;
        cin>>x>>k;
        int t1;
        int t2;
      
        if(x%k !=0){
            cout<<"1"<<endl<<x<<endl;
           
        }
        else{
        for(int i=0;i<x;i++){
            t1=x-i;
            t2=i;
            if(t1%k!=0 and t2%k!=0){
                cout<<"2"<<endl;
                cout<<t1<<" "<<t2<<endl;
                break;
            }
        }}
    }
}