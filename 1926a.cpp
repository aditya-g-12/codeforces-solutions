#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    string s;
    while(n--){
        cin>>s;
        int acount=0;
        int bcount=0;
        for(int i=0;i<((int)s.length());i++){
            if(s[i]=='A'){
                acount++;
            }
        }
        bcount=((int)s.length())-acount;
        if(bcount>acount){
            cout<<"B"<<endl;

        }
        else{
            cout<<"A"<<endl;
        }
    }
}