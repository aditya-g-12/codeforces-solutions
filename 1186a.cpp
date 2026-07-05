#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    if((m-n)>=0 and (k-n)>=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}