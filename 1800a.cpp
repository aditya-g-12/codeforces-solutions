#include<iostream>
#include<unordered_set>
using  namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set <char> c;
        for(int i =0 ; i<n;i++){
            if(s[i]>'Z'){
                s[i]=s[i]-32;
            }
            c.insert(s[i]);
        }
        string finali ="";
        for(char i :c){
            finali+=i;
        }
        if(finali=="OEWM"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}