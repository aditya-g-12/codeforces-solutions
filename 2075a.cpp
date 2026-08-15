#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            k--;
            cout<<(n+k-1)/k<<endl;
        }
        else{
            n-=k;
            k--;
            cout<<(n+k-1)/k+1<<endl;
        }
    }
}