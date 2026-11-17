#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(true){
        int sum=0;
        int a=n;
        while(a>0){
            sum+=a%10;
            a/=10;
        }
        if(sum%4==0){
            cout<<n;
            break;
        }
        n++;
    }
}