#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int max=max(a,max(b,c));
        if(max - a ==0){
            cout<<0<<" ";
        }
        else{
            cout<<(max -a)+1<<" ";
        }
        if(max - b ==0){
            cout<<0<<" ";
        }
        else{
            cout<<(max -b)+1<<" ";
        }
        if(max - c ==0){
            cout<<0<<" ";
        }
        else{
            cout<<(max -c)+1<<endl;
        }
    }
}