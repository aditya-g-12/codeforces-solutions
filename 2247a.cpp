#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int neg=0;
        int temp;
        
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==-1){
                neg++;
            }
        }

        if(n%2==0 && neg%2==(n/2)%2){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
}