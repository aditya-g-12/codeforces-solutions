#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int bindex=0;
        int cindex=0;
        for(int i=0;i<l;i++){
            if(s[i]=='B'){
                bindex=(i+1);
                break;
            }
        }
        while(l--){
            if(s[l]=='B'){
                cindex=(l+1);
                break;
            }
        }
        cout<<"                                              "<<(abs(bindex-cindex)+1)<<endl;
    }
}