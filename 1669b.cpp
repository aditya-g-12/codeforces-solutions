#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        if(a<3){
            cout<<"-1"<<endl;
            continue;
        }
        bool flag = true;
        sort(arr,arr+a);
        for(int i=0;i<(a-2);i++){
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
                cout<<arr[i]<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"-1"<<endl;
        }

    }
}