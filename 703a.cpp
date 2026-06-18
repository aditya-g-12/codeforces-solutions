#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int countt=0;
    int chris=0;
    for( int i=0 ; i<n;i++){
        int a,b;
        
        cin >>a>>b;
        if(a>b){
            countt++;
        }
        if(a<b){
            chris++;
        }
    }
    if(countt==chris){
        cout<<"Friendship is magic!^^";
    }
    else{if(countt>chris){
        cout<<"Mishka";
    }
    else{
        cout<<"Chris";
    }
}
}