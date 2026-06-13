#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    int k;
    for(int i=0;i<t;i++){
        bool status=false;
        cin>>n>>k;
        int arr[n];
        for(int p=0;p<n;p++){
            cin>>arr[n];
            if(arr[n]==k){
                status=true;
            }        
        }
        if(status==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}