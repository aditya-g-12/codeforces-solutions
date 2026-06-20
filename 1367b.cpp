#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        int arr[len];
        int ecount=0;
        int ocount=0;
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        for( int i=0;i<(len);i++){
            if (i % 2 == 0) {
                if(arr[i]%2!=0){
                ocount++;
                }   
            }
            else {
            if(arr[i]%2==0){
                ecount++;
            }
            }      
        }
        if(ocount==ecount){
            cout<<ecount<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}