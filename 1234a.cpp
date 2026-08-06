#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int garbage;
        for(int i=0;i<n;i++){
            cin>>garbage;
            sum+=garbage;
        }
        if(sum%n==0){
        cout<<(sum/n)<<endl;}
        else{
            cout<<(sum/n)+1<<endl;
        }
    }
} 