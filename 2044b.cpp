#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s1;
        string s2;
        cin>>s1;
        int len = s1.length();
        for( int i =0 ;i< len;i ++){
            if(s1[len-1-i]=='q'){
                s1[len-1-i]='p';
            }
            else{
                if(s1[len-1-i]=='p'){
                 s1[len-1-i]='q';
                }
            }
        s2+=(s1[len-1-i]);
        }
        cout<<s2<<endl<<endl;
    }
}