#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int t;
        cin>>t;
        int arr[t];
        int esum=0;
        int osum=0;
        for(int i=0;i<t;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                esum+=arr[i];
            }
            else{
                osum+=arr[i];
            }
        }
        if(esum>osum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}