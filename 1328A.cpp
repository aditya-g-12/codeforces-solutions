#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
        int a;
        int b;
        cin>>a;
        cin>>b;
        if(a%b==0){
            cout<<'0'<<endl;
        }
        else{
            cout<<(b-(a%b))<<endl;
        }
        
    }
}