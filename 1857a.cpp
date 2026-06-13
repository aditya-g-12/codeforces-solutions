#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for ( int i=0 ; i<n;i++){
        int k;
        cin>>k;
        int sum=0;
        int arr[k];
        for(int ii=0;ii<k;ii++){
            cin>>arr[ii];
            sum+=arr[ii];
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}