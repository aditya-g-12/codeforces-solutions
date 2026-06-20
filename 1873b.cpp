#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t;
        int arr[t];
        for(int i=0;i<t;i++){
            cin>>arr[i];
        }
        sort(arr,arr+t);
        arr[0]=arr[0]+1;
        int product =1;
        for(int i=0;i<t;i++){
            product*=arr[i];
        }
        cout<<product<<endl;
    }
}