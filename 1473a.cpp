#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        int lowcount=0;
        for(int i =0 ; i<n;i++){
            cin>>arr[i];
            if(arr[i]<=d){
                lowcount++
            }
        }
        if(lowcount==n){
            cout<<"YES";
        }
        else{
        sort(arr,arr+n);
        if(arr[0]+arr[1] <= d){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        }
        cout<<endl;
    }
}