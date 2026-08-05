#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b or b==c or a==c){
            cout<<"0";
        }
        else{
            cout<<min(abs(a-b),min(abs(b-c),abs(c-a)));
        }
        cout<<endl;
    }
}