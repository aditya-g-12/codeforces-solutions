#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int acount=0;
        int bcount=0;
        int ccount=0;
        string s;
        cin>>s;
        int len = s.length();
        for(int i =0;i<len;i++){
            if(s[i]=='A'){
                acount++;
            }
            else{
                if(s[i]=='B'){
                    bcount++;
                }
                else{
                    ccount++;
                }
            }
        }
        if(bcount==(acount+ccount)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}