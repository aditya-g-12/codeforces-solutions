#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a+b>9 or b+c>9 or c+a>9){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}