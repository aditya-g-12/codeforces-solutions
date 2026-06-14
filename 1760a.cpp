#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int arr[3];
for(int i=0;i<n;i++){
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    sort(arr,arr+3);
    cout<<arr[1]<<endl;
}
}
