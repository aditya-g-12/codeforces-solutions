#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int temp=0;
        bool foundd = false;
        while(x--){
            cin>>temp;
            if(temp = 67 ){
                foundd=true;
                
            }
        }
        if(foundd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}