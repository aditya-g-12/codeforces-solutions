#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int len;
    for(int i=0;i<n;i++){
        cin>>len;  
        int arr[len];
        int largest=0;
        int count=0;
        for(int j=0;j<len;j++){
            cin>>arr[j];
            if(arr[j]==1){
                count=0;
            }
            if(arr[j]==0){
                
                count++;
                if(count>largest){
                    largest=count;;
                }
            }
            
        }
        cout<<largest<<endl;
    }
}