#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h1=(n+5)/3;
        int h2=min(h1-1,n-h1-1);
        int h3=n-h1-h2;
        cout<<h2<<" "<<h1<<" "<<h3<<"\n";
    }
}