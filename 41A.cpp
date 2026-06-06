#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    if(s2.length()!=s1.length()){
        cout<<"NO";
        return 0;
    }
    int count =0;
    int length=s2.length();
    for(int i=0;i<length;i++){
        if(s1[(length-i-1)]==   s2[i]){
            count++;
            
        }
    }
    if(count==length){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
    return 0;
}