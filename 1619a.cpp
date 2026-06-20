#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        bool sat =true;
        int lenghtt=s.length();
        if((lenghtt)%2!=0){
            sat =false;
        }
        for(int i=0;i<((lenghtt)/2);i++){
            if(s[i]!=s[(lenghtt/2)+i]){
                sat = false;
            }
        }
        if(sat){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}