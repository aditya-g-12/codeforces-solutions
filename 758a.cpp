#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() { 
    int n;
     cin>>n; 
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    sort(arr,arr+n);
    int la=arr[n-1];
    int count=0;
    for(int i=0;i<n;i++){
        count+=(la-arr[i]);
    } 
    cout<<count;

return 0;
 }