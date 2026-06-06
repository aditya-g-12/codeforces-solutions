#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int captial_count=0;
    int length=a.length();
    for( int i=0;i<length;i++){ //captial checker
        if(a[i]>64&&a[i]<91){
            captial_count++;
        }
    }
    if(captial_count>(length-captial_count)){
        for( int i=0;i<length;i++){ //capital maker
        if(a[i]>96&&a[i]<123){
            a[i]= (char)(a[i]-32);
        }
    }
    }
    else{
    for( int i=0;i<length;i++){ //small maker
        if(a[i]>64&&a[i]<91){
            a[i]= (char)(a[i]+32);
        }
    }
    }
    cout<<a;
}