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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int right=1;
        int left=n-1;
        int leftcount=0;
        sort(arr,arr+n);
        if(arr[0]%2!=0){
            if(arr[n-1]%2 !=0){
                cout<<0<<endl;
            }
            else{
                for(right;right<n-1;right++){
                    if(arr[right]%2!=0){
                        break;
                    }
                }for(left;left>0;left--){
                    if(arr[left]%2!=0){
                        break;
                    }
                }
                cout<<min(right,n-1-left)<<endl;
            }
        }
        else{
            if(arr[n-1]%2 ==0){
                cout<<0<<endl;
            }
            else{
                for(right;right<n-1;right++){
                    if(arr[right]%2==0){
                        break;
                    }
                }for(left;left>0;left--){
                    if(arr[left]%2==0){
                        break;
                    }
                }
                cout<<min(right,n-1-left)<<endl;
            }
        }
    }
}