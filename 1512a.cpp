#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int length;
    for(int i=0;i<n;i++){
        cin>>length;
        int arr[length];
        for(int ii=0;ii<length;ii++){
            cin>>arr[ii];
        }
        int checker=arr[0];
        for(int ii=1;ii<(length-1);ii++){
            if(checker!=arr[ii]){
                if(checker==arr[ii+1]){
                    
                    cout<<ii+1<<endl;
                    break;
                }
                else{
                    cout<<"1"<<endl;
                    break;
                }
            }
            else{
                checker=arr[ii];
            }
            if(ii==(length-2)){
                cout<<length<<endl;
            }
        }
        
    }
}