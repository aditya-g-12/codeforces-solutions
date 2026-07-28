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
        int sum=0;
        bool mil = false;
        for(int i =0; i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(arr[i]%3==1){
                mil=true;
            }
        }
        if(sum%3==0){
            cout<<"0"<<endl;
            break;
        }
        else{
            if(n==1){
                cout<<"1"<<endl;
                break;
            }
            if(sum%3==2){
                cout<<"1"<<endl;
            }
            else{
                if(mil){
                    cout<<"1"<<endl;
                }
                else{
                    cout<<"2"<<endl;
                }
            }
        }
    }
}