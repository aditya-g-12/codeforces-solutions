#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        int lar=0;
        int hashlen=0;
        for(int i =0 ;i<n;i++){
            if(s[i]=='#'){
                hashlen++;
                if(hashlen>lar){
                    lar=hashlen;
                }
            }
            else{
                hashlen=0;
            }
        }
        cout<<(lar+1)/2<<endl;
    }
}