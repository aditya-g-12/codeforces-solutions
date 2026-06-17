#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cin>>n;
for( int i=0 ; i<n;i++){
    string s;
    cin>>s;
    int len = s.length();
    for(int k=0;k<len/2;k++){
        cout<<s[2*k];
    }
    cout<<s[len-1]<<endl;
}
}