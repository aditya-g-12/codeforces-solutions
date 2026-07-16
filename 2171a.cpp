#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cowcount=0;
        if(n%2!=0 or n==0){
            cout<<0;
        }
        else{
            if(n%2==0){
                cout<<(n/4)+1;
            }
            else{
            if(n%4==0){
                cout<<(n/4);
            }
        }
        }
        cout<<endl;
    }

}