#include<iostream>
using namespace std;
int main (){
    int n;
    int t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;

}