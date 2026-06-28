#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        string outt;
        char arr[64];
        for(int i=0;i<64;i++){
            cin>>arr[i];
            if(arr[i]!='.'){
                outt+=arr[i];
            }
        }
        cout<<outt<<endl;
    }
}