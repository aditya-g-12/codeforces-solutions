#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        bool f = true;
        int steps = 0 ;
        while(f){
            if (n<a or n<b){
            f=false;
            }
            else{
            steps ++;
            if(a>b){
                b+=a;
            }
            else{
                a+=b;
            }
            }
        }
        cout<<steps<<endl;
    }
}