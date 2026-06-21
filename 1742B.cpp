#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        bool stat=true;
        int len;
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        sort(arr,arr+len);
        for(int i=0;i<(len-1);i++){
            if(arr[i]==arr[i+1]){
                stat=false;
            }
        }
        if(stat){
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
}