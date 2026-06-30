#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        bool foun = false;
        if(x>=y){
            if(x%y==0){
                foun  = true;
            }
        }
        if(foun){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}