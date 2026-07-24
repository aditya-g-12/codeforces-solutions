#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        string s;
        for(int i=0 ; i<n;i++){
            cin>>s;
            int len=s.length();
            if(len>k){
                cout<<(i+1)<<endl;
                break;
            }
            else{
                k-=len;
            }
        }
    }
}