#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        int garbage=0;
        for(int i=0;i<n;i++){
            cin>>garbage;
            arr[garbage]++;
        }
        int greatest=0;
        for(int i=0;i<n;i++){
            if(arr[i]>greatest){
                greatest=arr[i];
            }
        }
        cout<<(n-greatest);
    }
}