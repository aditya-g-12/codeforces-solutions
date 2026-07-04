#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        int d=abs(a-b);
        cout<<(d+2*c-1)/(2*c)<<endl;
    }
}