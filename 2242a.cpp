#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int k;
    cin>>k;
    int arr[k];
    bool flag;
    int noof2s=0;
    for(int i =0;i<k;i++){
        cin>>arr[i];
        if(arr[i]>2){
            cout<<"YES"<<endl;
            flag = true;
        }
        if(arr[i]==2){
            noof2s++;
        }
    }
    if(flag){
        continue;
    }
    else{
        if(noof2s>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
}