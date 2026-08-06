#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(char c:s){
            if(c=='0'){
                c=':';
            }
        }
        int count=4;
        for(int i=0;i<3;i++){
            count+=(s[i+1]-s[i]);
        }
        cout<<count;
    }
}