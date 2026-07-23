#include <iostream>
using namespace std ;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        if(n%2==0){
            cout<<((n/2)*(a-b));
        }
        else{
            cout<<((n/2)*(a-b))+a;
        }
        
    }
}