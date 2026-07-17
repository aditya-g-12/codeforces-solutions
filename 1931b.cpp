#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool broken = false;
        int sum = 0;
        for(int i = 0 ; i<n;i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        int water = 0 ;
        int water_needed= sum / n;
        for(int i = 0 ; i<n;i++){
            water+=arr[i] - water_needed;
            if(water<0){
                broken = true;
                break;
            }
        }
        if(!broken){
            if(water ==0){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
        
    }
}