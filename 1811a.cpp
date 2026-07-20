#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool done = false ;
        for(int i =0 ; i<n;i++){
            if(s[i]>=k ){
                cout<<s[i];
                continue;
            }
            else{
                if(!done){
                cout<<k<<s[i];
                done = true;
                }
                else{
                    cout<<s[i];
                }
            }
        }
        if(!done){
            cout<<k;
        }
        cout<<endl;
    }
}