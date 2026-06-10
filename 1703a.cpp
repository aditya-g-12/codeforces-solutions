#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;cin>>n;
    string s;
    int part=0;
    for(int i=0;i<n;i++){
        cin>>s;
        part=0;
        if((s[0]=='y')or (s[0]=='Y')){
            part++;
        }
        if((s[1]=='e')or (s[1]=='E')){
            part++;
        }
        if((s[2]=='s')or (s[2]=='S')){
            part++;
        }
        if(part==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}