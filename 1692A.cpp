#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a,b,c,d;
    for(int i=0;i<n;i++){
    int count=0;
    cin>>a>>b>>c>>d;
    if(b>a){
        count++;
    }
    if(c>a){
        count++;
    }
    if(d>a){
        count++;
    }
    cout<<count<<endl;
}
    
}