#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int lenn = s.length();
        if(s[lenn-1]=='s' && s[lenn-2]=='u'){
            for( int i=0 ; i<(lenn-2);i++){
                cout<<s[i];
            }
            cout<<"i"<<endl;
        }
    }
}