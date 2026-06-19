#include<iostream>
#include<algorithm>
using namespace std;
bool is_valid(string s){
        sort(s.begin(),s.end());
        if (s=="Timru"){
            return true;
        }
        else{
            return false;
        }
    }
int main(){
    int n;
    cin>>n;
    
    
    for( int i=0;i<n;i++){
        int len;
        cin>>len;
        string s;
        cin>>s;
        if(len!=5){
            cout<<"NO"<<endl;
            continue;
        }
        if(is_valid(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}