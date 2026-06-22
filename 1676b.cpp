#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     int n;
     cin>>n;
     while(n--){
        int a;
        cin>>a;
        int arr[a];
        int total=0;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            total+=arr[i];
        }
        sort(arr,arr+a);
        cout<<(total-(arr[0]*a))<<endl;
     }
}