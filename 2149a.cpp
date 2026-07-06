#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int temp;
        int minuscount=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp==1){
                continue;
            }
            else{
                if(temp==-1){
                    minuscount++;
                }
                else{
                    count+=1;
                }
            }
        }
        if(minuscount%2==0){
        cout<<count<<endl;
    }
        else{
            cout<<count+2<<endl;
        }
    }
}