#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    string y;
    cin >> x;
    cin >> y;
    string out="";
    for ( int i=0;i<(int)(x.length());i++){
        if(x[i]==y[i]){
            out+='0';
        }
        else{
            out+='1';
        }
    }
    cout<<out;
    
}