#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int note=0;
    while((n-100)>-1){
        n-=100;
        note++;
    }
    while((n-20)>-1){
        n-=20;
        note++;
    }
    while((n-10)>-1){
        n-=10;
        note++;
    }
    while((n-5)>-1){
        n-=5;
        note++;
    }
    while((n-1)>-1){
        n-=1;
        note++;
    }
    cout<<note;
}