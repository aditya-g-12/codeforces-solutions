#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    string c;
    int faces=0;
    for ( int i=0;i<n;i++){
        cin>>c;
        if(c[0]=='T'){
            faces+=4;
        }
        if(c[0]=='C'){
            faces+=6;
        }
        if(c[0]=='O'){
            faces+=8;
        }
        if(c[0]=='D'){
            faces+=12;
        }
        if(c[0]=='I'){
            faces+=20;
        }
    }
    cout<<faces;
}