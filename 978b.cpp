#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int xcount = 0 ;
    int fincount=0;
    bool prevx= false;
    for(int i =0 ;i<n;i++){
        if(s[i]=='x'){
            prevx=true;
            if(prevx){
                xcount++;
                if(xcount>2){
                    fincount++;
                }
            }
            else{
                xcount=1;
            }
        }
        else{
            prevx=false;
            xcount=0;
        }
        
    }
    cout<<fincount<<endl;
}