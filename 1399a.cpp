#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    int length;
    cin>>n;
    for(int i=0;i<n;i++){
        int status=0;
        cin>>length;
        int arr[length];
        for(int j=0;j<length;j++){
            cin>>arr[j];
        }
        sort(arr, arr + length);
        for(int k=0;k<(length-1);k++){
            if((arr[k]-arr[k+1])>-2 && (arr[k]-arr[k+1])<2){
                status++;
            }
        }
        
        if(status==(length-1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}