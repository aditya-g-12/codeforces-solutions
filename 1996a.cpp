#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int sum=0;
        sum+=(a/4);
        sum+=(a%4)/2;
        cout<<sum<<endl;
    }
}