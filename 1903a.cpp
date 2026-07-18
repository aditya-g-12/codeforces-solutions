#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        bool decreasing = false;
        cin>>arr[0];
        int smallest = arr[0];
        for(int i = 1 ; i<n;i++){
            cin>>arr[i];
            if(arr[i]<smallest){
                decreasing= true;
            }
            else{
                smallest=arr[i];
            }
        }
        if(k!=1){
            cout<<"YES";
        }
        else{
            if(decreasing){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        cout<<endl;
    }
}