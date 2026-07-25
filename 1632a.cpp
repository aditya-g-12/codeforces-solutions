#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n>2){
            cout<<"NO";
        }
        else{
            if(n==1){
                cout<<"YES";
            }
            else{
                if(s[0]=='0'){
                    if(s[1]=='1'){
                        cout<<"YES";
                    }
                    else{
                        cout<<"NO";
                    }
                }
                else{
                    if(s[1]=='0'){
                        cout<<"YES";
                    }
                    else{
                        cout<<"NO";
                    }
                }

            }
        }
        cout<<endl;
        
    }
}