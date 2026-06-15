#include<iostream>
#include<vector>
#include<String>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      int corpos=0;
      if(s[0]=='a'){
        corpos++;
      }
      if(s[1]=='b'){
        corpos++;
      }
      if(s[2]=='c'){
        corpos++;
      }
      if(corpos==0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }

    }
}