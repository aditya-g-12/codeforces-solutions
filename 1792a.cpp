#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for(int i =0 ; i<n;i++){
            cin>>arr[n];
        }
        sort(arr,arr+n);
        for(int i=0 ; i<n;i++){
            if(arr[i]==0){
                continue;
            }
            if(arr[i]==1){
                count++;
                if(i!=n-1){
                arr[i+1]--;}
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
}