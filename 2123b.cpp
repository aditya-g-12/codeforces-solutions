#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , p , k;
        cin>>n>>p>>k;
        bool plargest = false;
        int arr[n];
        cin>>arr[0];
        int largest=arr[0];
        for(int i =1 ; i<n;i++){
            cin>>arr[i];
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        if(arr[p-1] ==largest){
            plargest=true;
        }
        if(plargest){
            cout<<"YES";
        }
        else{
            if(k==1){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        cout<<endl;
    }
}