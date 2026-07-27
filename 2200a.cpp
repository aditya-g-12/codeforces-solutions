#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int greatest=0;
        int garbage;
        int count=0;
            for(int i=0 ; i<n;i++){
                cin>>garbage;
                if(n==1){
                cout<<"1"<<endl;
                break;
                }
                else{
                if(garbage>greatest){
                    greatest=garbage;
                    count=0;
                }
                if(garbage==greatest){
                    count++;
                }
            }
            }
            cout<<count<<endl;
        
    }
}
    