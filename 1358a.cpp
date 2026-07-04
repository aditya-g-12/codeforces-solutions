#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        int totall=n*m;
        if(totall%2==0){
            cout<<(totall/2)<<endl;
        }
        else{
            cout<<(totall/2) +1<<endl; 
        }
    }
}