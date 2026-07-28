#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,l;
        cin>>r>>l;
        int i=l-r;
        int need =( 1+ sqrt((1+(8*i))) )/2;
        cout<<need;
    
    }
}