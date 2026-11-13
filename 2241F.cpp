#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int t;
        cin>>t;
        string s;
        cin>>s;
        int zerocount=0;
        int trans=0;
        while(t--){
            if(s[t]=='0'){
                zerocount++;
            }
            else{
                trans+=zerocount;
            }
        }
        if(trans%2==0){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
}