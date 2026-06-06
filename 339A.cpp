#include <iostream>
#include <string>
using namespace std;

int main() {
    string k;
    cin >> k;

    string str;

    for(int i = 0; i < k.length(); i += 2) {
        str.push_back(k[i]);
    }

    for( int i=0;i<str.length();i++){
        char mine;
        for( int j=i+1;j<str.length();j++){
            if(str[i]>str[j]){
                mine=str[j];
                str[j]=str[i];
                str[i]=mine;
            }
        }
    }
    for( int i=0;i<str.length();i++){
        cout<<str[i];
        if(i==(str.length()-1)){
            break;
        }
        cout<<"+";
    }


}