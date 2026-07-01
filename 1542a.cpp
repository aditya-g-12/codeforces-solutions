#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int arr[2*n];
        int ocount=0;
        int ecount=0;
        for(int i=0;i<(2*n);i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                ecount++;
            }
            else{
                ocount++;
                
            }
            
        }
        if(ocount==ecount){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}