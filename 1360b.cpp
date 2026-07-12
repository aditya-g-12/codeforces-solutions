#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int diff =0;
        int lowestd = 1000000;
        for(int i =0 ; i<(n-1);i++){
            diff = arr[i+1] -arr[i];
            if(diff<lowestd){
                lowestd=diff;
            }
        }
        cout<<lowestd<<endl;
    }
}