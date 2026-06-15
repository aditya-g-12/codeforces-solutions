#include <iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int len;
        string k;
        cin>>len>>k;
        int count=len;
        for(int j=0;j<len;j++){
            if((k[j]=='0'&&k[len-1-j]=='1')or(k[j]=='1'&&k[len-1-j]=='0')){
                count-=2;
            }
            else{
                break;
            }
        }
        if(count<0){
            count=0;
        }
        cout<<count<<endl;
    }
}