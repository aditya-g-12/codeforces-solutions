#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        int sum =0;
        bool equal=true;
        cin>>arr[0];
        sum+=arr[0];
        for(int i=1;i<a;i++){
            cin>>arr[i];
            if(arr[i-1]!=arr[i]){
                equal=false;
            }
            sum+=arr[i];
        }
        if(a%2==0){
            if(sum%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(equal){
                cout<<"NO"<<endl;
            }
            else{
            if(sum%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }}
            
        }
    }
}