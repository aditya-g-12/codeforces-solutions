#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        string s;
        cin>>s;
        string t="3141592653589793238462643383279";
        int count=0;
        int i=0;
        while(s[i]!='\0'){
            if(s[i]==t[i]){
                count++;
            }
            else{
                break;
            }
            i++;
        }
        cout<<"                        "<<count<<endl;

    }

}