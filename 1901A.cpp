#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int len,endd;
        cin>>len>>endd;
        int arr[len];
        
        for(int j=0;j<(len);j++){
            cin>>arr[j];
        }
        int distance=arr[0];
        for(int j=0;j<(len-1);j++){
            if((arr[j+1]-arr[j])>distance){
                distance=(arr[j+1]-arr[j]);
            }
        }
        if(distance<2*((endd)-arr[len-1])){
            distance=2*((endd)-arr[len-1]);
        }
        cout<<distance<<endl;
    }
}