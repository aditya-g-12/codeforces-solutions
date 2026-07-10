#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    while(n--){
        cin >>a;
        if(a==2){
            cout<<2;
        }
        else{
            if(a==3){
                cout<<3;
            }
            else{
                if(n%2==0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }
            }
        }
        cout<<endl;
    }
}