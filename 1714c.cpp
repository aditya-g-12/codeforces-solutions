#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        string a="";
        int n=9;
        while(n>=1){
            if(s>n){
                a+=char('0'+n);
                s-=n;
            }
            else{
                a+=char('0'+s);
                break;
            }
            n--;
        }
        reverse(a.begin(),a.end());
        cout<<a<<endl;
    }
    return 0;
}