#include<iostream>
using namespace std;
int isquestionholder(string s){
    for(int i=0;i<3;i++){
        if(s[i]=='?'){
            return 1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        bool afound=false;
        bool bfound = false;
        bool cfound = false;
        string a,b,c;
        cin>>a>>b>>c;
        if(isquestionholder(a)){
            for(int i=0;i<3;i++){
                if(a[i]=='A'){
                    afound=true;
                }
                if(a[i]=='B'){
                    bfound=true;
                }
                if(a[i]=='C'){
                    cfound=true;
                }
            }
        }
        if(isquestionholder(b)){
            for(int i=0;i<3;i++){
                if(b[i]=='A'){
                    afound=true;
                }
                if(b[i]=='B'){
                    bfound=true;
                }
                if(b[i]=='C'){
                    cfound=true;
                }
            }
        }
        if(isquestionholder(c)){
            for(int i=0;i<3;i++){
                if(c[i]=='A'){
                    afound=true;
                }
                if(c[i]=='B'){
                    bfound=true;
                }
                if(c[i]=='C'){
                    cfound=true;
                }
            }
        }
        if(!afound){
            cout<<"A"<<endl;
        }
        if(!bfound){
            cout<<"B"<<endl;
        }
        if(!cfound){
            cout<<"C"<<endl;
        }
    
    }
}