#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for( int i=0;i<a;i++){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    else{
        cout<<(n/2)<<endl;
    }
}
}