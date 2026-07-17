#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int oddcount=0;
        int evencount=0;
        int finalsum=0;
        int tempp = 0;
        for(int i = 0 ; i < n;i++){
            cin>>tempp;
            if(tempp%2==0){
                oddcount=0;
                evencount++;
            }
            else{
                oddcount++;
                evencount=0;
            }

            if(oddcount>1){
                finalsum++;
                oddcount=1;
            }
            if(evencount>1){
                finalsum++;
                evencount=1;
            }
        }
        cout<<finalsum<<endl;
    }
}