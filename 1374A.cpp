#include<iostream>
using namespace std;
int main(){
    int a,b,k;
    int s;
    cin>>s;
    while(s--){
    cin>>a>>b>>k;
        cout<<k-((k-b)%a)<<endl;
}
}