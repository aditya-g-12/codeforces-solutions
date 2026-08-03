#include <iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if(a[a.length()-1]==b[b.length()-1]){
        int xcountb=0;
        int xcounta=0;
        for(char c:a){
            if(c=='X'){
                xcounta++;
            }
        }
        for(char c:b){
            if(c=='X'){
                xcountb++;
            }
        }
        if(xcounta==xcountb){
            cout<<"=";
        }
        else{
            if(a[a.length()-1]=='L'){
            
            if(xcounta>xcountb){
                cout<<">";
            }
            else{
                cout<<"<";
            }
            }
            else{
            if(xcounta>xcountb){
                cout<<"<";
            }
            else{
                cout<<">";
            }
            }
        }
        }
        else{
            if(a[a.length()-1]=='S'){
                cout<<"<";
            }
            else{
                if (a[a.length()-1]=='L'){
                cout<<">";
                }
                else{
                    if(b[b.length()-1]=='S'){
                        cout<<">";
                    }
                    else{
                        cout<<"<";
                    }
                }
            }
            
        }
    cout<<endl;

    }
}