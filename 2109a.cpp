#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool zero_found=false;
        bool last_was_zero=false;
        bool fault=false;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp==0){
                zero_found=true;
                if(last_was_zero){
                    fault=true;
                }
                last_was_zero=true;
            }
            else{
                last_was_zero=false;
            }
        }
        if(!zero_found){
            fault=true;
        }
        if(!fault){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
}