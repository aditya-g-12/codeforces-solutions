#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int value;
    for (int i=0;i<n;i++){
        cin>>value;
        if(value%3==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
}